#include<stdio.h>

int StringToInt(const char *pszBuffer)
{
    int result=0; // variable to store the result
    int sign = 1; //Initialize sign as positive
    
    if(pszBuffer == NULL) //If pointer is null
        return 0;

    //If number is negative, then update sign
    if((*pszBuffer) == '-')
    {
        sign = -1;
        ++pszBuffer; //Increment the pointer
    }

    while( (*(char*)pszBuffer >= 48) && (*(char*)pszBuffer <= 57) )//check string validity
    {
        result = (result*10)+ (*pszBuffer-48);
        pszBuffer++; //Increment the pointer
    }
    return (sign * result);
}

int main()
{
    int d;
    d = StringToInt("-1230");
    printf("%d\n",d);
    return 0;
}
