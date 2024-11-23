#include <stdio.h>
#include <string.h>

void ispalindrome(char *s)
{
    char *ptr,*rev;
    ptr = s;
    while(*ptr != '\0')
    {
        ptr++;
    }
    --ptr;
    for(rev = s; ptr>=rev ; )
    {
        if(*ptr == *rev)
        {
            --ptr;
            rev++;
        }
        else
        break;
    }
    if(rev>ptr)
    {
        printf("%s is Palindrome\n",s);
    }
    else
    {
        printf("%s is Not a palindrome\n",s);
    }
}

int main(void)
{
    char p[] = "mom";
    char q[] = "hello";
    int i,cnt=0,n = strlen(p);
    for(i=0;i<n;i++)
    {
        if(p[i]==p[n-i-1])
        cnt++;
    }
    if(cnt==n)
    printf("%s is Palindrome\n",p);
    else
    printf("%s is Not a Palindrome\n",p);

    ispalindrome(q);
    return 0;
}
