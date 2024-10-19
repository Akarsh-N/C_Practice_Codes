#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //file pointer
    FILE *fp = NULL;
    //Message
    char * message = "I love Aticleworld.com";
    //Variable for message length
    int length = 0;

    //create and open the texr file
    fp = fopen("aticleworld.txt", "w+");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }

    //Get the length of message
    length = strlen(message);

    //write the length in file
    fprintf(fp,"length of message is %d\n",length);

    //write the message in file
    fprintf(fp,"Message is %s\n",message);

    //Close the file
    fclose(fp);
    return 0;
}
