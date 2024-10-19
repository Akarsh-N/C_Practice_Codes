#include <stdio.h>
#include <stdlib.h>

//Maximum size of the array
#define MAX_SIZE  32

int main()
{
    //file pointer
    FILE *fp = NULL;
    char readFileData[MAX_SIZE] = {0};

    //open the file
    fp = fopen("aticleworld.txt", "r");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }

    // Read 5 character from stream
    fread(readFileData,sizeof(char),6, fp);

    //Display read data
    puts(readFileData);

    //close the file
    fclose(fp);
    printf("Read file successfully\n");

    return 0;
}
