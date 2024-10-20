#include<stdio.h>
#include <string.h>

int main()
{
char str[5][10] = {"white","red","green","violet","yellow"};
char temp[10];
int i,j;
for (i=0; i<5; i++)
{
 for (j=i+1; j<5; j++)
  {
      if(strcmp(str[i],str[j]) > 0) // if(strcmp(str[i],str[j]) < 0)
       {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
       }
  }
}
for (i = 0;i < 5;i++)
{
printf("%s \n",str[i]);
}
return 0;
}
