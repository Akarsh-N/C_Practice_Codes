#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define MAX 15

int strlength(char *str)
{
    uint8_t i = 0;
    int count = 0;
    
    while(str[i]!='\0')
    {
        count ++;
        i++;
    }
    return count;
}

int main()
{
  char str[50] = "GeekS";
  char str1[50] = {'\0'};
  char buf[MAX];
  //char buf1[MAX];

  printf("%s %ld\n",str,strlen(str));
  printf("%d\n",strlength(str));
  
  for(int i=0;str[i]!='\0';i++)
  printf("%c ", str[i]);
  
  printf("\n%ld",sizeof(str));
  
  printf("\nEnter the string for scanf without space: ");
  scanf("%s",str1);
  printf("string is: %s\n",str1);
  fflush(stdout);
  // Consume the leftover newline character
  getchar();

  printf("\nEnter the string for fgets: ");
  // Using fgets to take input from stdin
  fgets(buf, MAX, stdin);
  printf("string is: %s", buf);
  // Consume the leftover newline character
  //getchar(); 

  // using gets to take string from stdin
  //printf("\nEnter the string for gets: ");
  //gets(buf1);
  //printf("string is: %s\n", buf1);

  return 0;
}
