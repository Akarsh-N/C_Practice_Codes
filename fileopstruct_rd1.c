#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Variable to store read value
    int data  = 0;
    //int data1[5] = {0};
    //file pointer
    FILE *fp = NULL;

    //open the existing binary file
    fp = fopen("aticleworld1.bin", "rb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //read variable value from file
    fread(&data, sizeof(data), 1, fp);
    //fread(&data1, sizeof(int), 5, fp);

    printf("value is %d\n",data);
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",data1[i]);
    // }
    fclose(fp);
    return 0;
}
