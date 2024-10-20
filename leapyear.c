#include <stdio.h> 
  
int main() 
{ 
    int yr = 1900; 
  
    (yr%4==0) ? (yr%100!=0 ? printf("The year %d is a leap year\n",yr) : (yr%400==0 ? printf("The year %d is a leap year\n",yr) : printf("The year %d is not a leap year\n",yr))) : printf("The year %d is not a leap year\n",yr); 
    return 0; 
} 
