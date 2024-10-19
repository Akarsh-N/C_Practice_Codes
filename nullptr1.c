#include<stdio.h>
#include<stdlib.h>

int main()
{
int *piData = NULL;
printf("piData is %p\n",piData);
printf("piData is %d",*piData);//nullptr error
int x = 10;
piData = &x;
printf("After piData is %p\n",piData);
printf("piData is %d\n",*piData);

piData = malloc(sizeof(int)*10);
free(piData);

piData = NULL;
if(NULL == piData)
{
printf("Null == piData\n");
}
else
{
free(piData); //free after the use
printf("freed\n");
}

return 0;
}
