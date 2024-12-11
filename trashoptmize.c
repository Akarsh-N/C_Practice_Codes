#include <stdio.h>
#include <string.h>

// Function to compute the total time for a specific trash type
int calculate_time(int *D, char **T, int N, char trash_type) {
    int total_bags = 0;       // Total number of bags of the given trash type
    int farthest_house = -1;  // Index of the farthest house with this trash type

    // Traverse all houses
    for (int i = 0; i < N; i++) {
        // Count the number of bags of the given trash type in house `i`
        for (int j = 0; T[i][j] != '\0'; j++) {
            if (T[i][j] == trash_type) {
                total_bags++;
                farthest_house = i;  // Update the farthest house
            }
        }
    }

    // If no trash of this type exists, return 0
    if (farthest_house == -1) return 0;

    // Calculate the round-trip travel time to the farthest house
    int travel_time = 0;
    for (int i = 0; i <= farthest_house; i++) {
        travel_time += D[i];
    }
    travel_time *= 2; // Round trip

    // Add loading time for all bags
    int total_time = travel_time + total_bags;

    return total_time;
}

// Main solution function
int solution(int *D, char **T, int N) {
    // Calculate the time for each type of trash
    int plastic_time = calculate_time(D, T, N, 'P');
    int glass_time = calculate_time(D, T, N, 'G');
    int metal_time = calculate_time(D, T, N, 'M');

    // Find the maximum of the three times (since trucks work simultaneously)
    int max_time = plastic_time;
    if (glass_time > max_time) max_time = glass_time;
    if (metal_time > max_time) max_time = metal_time;

    return max_time;
}

// Example usage
int main() {
    // Example input
    int D[] = {2, 5, 4}; // Time to travel between houses (D[0] = start to house 0, D[1] = house 0 to 1, etc.)
    char *T[] = {"PGP", "M", "PG"}; // Trash collected at each house
    int N = 3; // Number of houses

    // Compute the result
    int result = solution(D, T, N);
    printf("Minimum time needed: %d\n", result);

    return 0;
}
