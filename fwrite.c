#include <stdio.h>
#include <stdlib.h>

//Maximum size of the array
#define MAX_SIZE  32

int main()
{
    //file pointer
    FILE *fp = NULL;
    char buffer[MAX_SIZE] = {0};

    //Get input from the user
    printf("Enter your Name = ");
    fgets(buffer,MAX_SIZE,stdin);

    //create the file
    fp = fopen("aticleworld.txt", "a");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Write the buffer in file
    fwrite(buffer, sizeof(buffer[0]), MAX_SIZE, fp);
    fputc('\n',fp);
    //close the file
    fclose(fp);
    printf("File has been created successfully\n");

    return 0;
}
