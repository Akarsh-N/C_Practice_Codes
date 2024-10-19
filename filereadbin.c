#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Reading element of array
    int data[10]  = {0};
    //file pointer
    FILE *fp = NULL;

    //open the existing binary file
    fp = fopen("aticleworld.dat", "rb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Reads 5 element from the file and stores it in data.
    fread(data, sizeof(data[0]),5, fp);

    for(int i= 0; i<5 ; i++)
    {
       printf("%d\n",data[i]);
    }
    fclose(fp);

    return 0;
}
