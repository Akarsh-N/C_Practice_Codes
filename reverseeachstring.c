#include <stdio.h>
#include <string.h>

void revstr(char *b,char *e)
{
    char temp;
    while(b < e)
    {
     temp = *b;
     *b++ = *e;
     *e-- = temp;
     }
}

void rev_str(char *s)
{
    char *start = NULL;
    char *word_b = s;

    while(*word_b)
   {
    if((start == NULL) && (*word_b != ' '))
    {
        start = word_b;
    }
    if(start && ((*(word_b + 1) == ' ') || (*(word_b +1) == '\0')))
    {
         revstr(start,word_b);
         start = NULL;
    }
    word_b++;
   }
   revstr(s,word_b-1);
}

int main()
{
    char arr[] = "Hello World";
    rev_str(arr);
    printf("%s\n",arr);
    return 0;
}
