#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char buff[100];
    int count,i,ch;

    printf("Enter the sentence: \n");
    for(i = 0; (buff[i] = getchar()) != '\n'; i++)
    {
        ;
    }

    buff[i] = '\0';
    count = i;

    printf("Sentence is %s\n",buff);
    for(i = 0; i < count ; i++ )
    {
      ch = islower(buff[i])? toupper(buff[i]):tolower(buff[i]);
      putchar(ch); 
    }
    printf("\n");
    return 0;
}