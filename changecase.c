#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100],str1[100];
    printf("enter the string:\n");
    scanf("%[^\n]s",str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str1[i] = (str[i] ^ (0x01 << 5)); 
        }
        else if(str[i]>='a' && str[i] <= 'z')
        {
            str1[i] = (str[i] ^ (0x01 << 5)); 
        }
        else
        {
            str1[i] = str[i];
        }    
    }
    printf("After changed case v1 is %s\n",str1);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
           str[i] &= ~(0x01 << 5); 
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] |= (0x01 << 5);
        }
    }
    printf("After changed case v2 is %s\n",str);
    return 0;
}