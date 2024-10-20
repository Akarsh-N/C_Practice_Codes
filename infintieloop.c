#include <stdio.h>

int main()
{
    
	unsigned int x = 10;
	while (x > 0) {
		printf("%d\n", x);
		x -= 3;
	}
    return 0;
}

// o/p: Infinite loop (because 2's complement of negative number will become positive so runs infintely)
