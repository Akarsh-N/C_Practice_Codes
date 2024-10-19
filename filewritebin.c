#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //file pointer
    FILE *fp = NULL;
    //Message
    char * message = "I love Aticleworld.com";
    //Variable for message length
    int length = 0;

    //create and open the binary file
    fp = fopen("aticleworld.dat", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Get the length of message
    length = strlen(message);

    //write the message len in file
    fwrite(&length, sizeof(int), 1, fp);

    //write message in file
    fwrite(message, sizeof(char),length, fp);
    fclose(fp);

    return 0;
}
