#include <stdio.h>
#include <stdlib.h>

int main()
{
    //file pointer
    int ch = 0;
    FILE *fp = NULL;

    //open the file in read
    fp = fopen("aticleworld.txt", "r");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }

    while( (ch=fgetc(fp)) != EOF )
    {
        //Display read character
        printf("%c", ch);
    }

    //close the file
    fclose(fp);

    printf("Read file successfully\n");
    return 0;
}
