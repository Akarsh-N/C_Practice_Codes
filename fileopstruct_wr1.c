#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable which want to write
    int data[]  = {65,66,67,68,69};
    //file pointer
    FILE *fp = NULL;

    //create and open the text file
    fp = fopen("aticleworld1.bin", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //write the array in file
    fwrite(data, sizeof(data),1, fp);
    //fwrite(data, sizeof(int),5, fp);
    fclose(fp);
    return 0;
}
