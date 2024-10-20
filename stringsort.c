#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

void sortstring(char *s);

int main(void)
{
    char s[] = "akarshnarayan";
    sortstring(s);
    return 0;
}

void sortstring(char *s)
{
    int c,d=0,length;
    char *ptr,*res,ch;
    
    length = strlen(s);
    
    res = (char*)malloc((length+1) * sizeof(char));
    ptr = s;
    for(ch = 'a'; ch <= 'z';ch++)
    {
        for(c=0;c<length;c++)
        {
            if(*ptr == ch)
            {
                *(res+d) = *ptr;
                d++;
            }
            ptr++;
        }
        ptr = s;
    }
    
    *(res +d) = '\0';
    strcpy(s,res);
    printf("%s\n",s);
    free(res);
}
