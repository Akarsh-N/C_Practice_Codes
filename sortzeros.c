#include <stdio.h>


void zerosort(int a[],int len)
{
    int temp = 0;
    
    for(int i = 0;i< len-1; i++)
    {
        for(int j = 0; j <len-i-1;j++)
        {
            if(a[j] > 0  && a[j+1] == 0)
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    
    int a[] = {0 ,1, 4, 5, 0, 9, 3};
    int len = sizeof(a)/sizeof(a[0]);
    zerosort(a,len);
    
    for(int m=0;m<len;m++)
    printf("%d ",a[m]);
    printf("\n");

    return 0;
}
