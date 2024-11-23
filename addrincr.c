#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *pcData = NULL; //pointer to character
    float *pfData = NULL; // pointer to float

    int aiData[3] = {100, 200 ,300};
    void *pvData = &aiData[0]; //address of 100
    //pvData += sizeof(int);
    //printf("Data is %d\n", *(int *)pvData);
    void *pvData3 = &aiData[3];
    int length = pvData3 - pvData;
    printf("length is %d\n", length);

    printf(" Address of character pointer before incrementation = %p\n", pcData);
    printf(" Address of float pointer before incrementation = %p\n", pfData);
    pcData++;  //pcData = pcData + 1;Increment the character pointer by one
    pfData++; //pfData = pfData + 1;Increment the float pointer by one
    printf(" Address of character pointer After incrementation = %p\n", pcData);
    printf(" Address of float pointer After incrementation = %p\n", pfData);

    char *pcData1 = NULL;
    float *pfData2 = NULL;

    pcData1 = pcData1 + 2;
    pfData2 = pfData2 + 2;
    printf(" Address of character pointer After incrementation = %p\n", pcData1);
    printf(" Address of float pointer After incrementation = %p\n", pfData2);
 return 0;
}
