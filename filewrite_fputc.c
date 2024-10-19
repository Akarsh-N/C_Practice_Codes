#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 0;
    FILE *fp = NULL;

    //create a file
    fp = fopen("aticleworld.txt", "w");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Write A to Z in file
    for(ch =65 ; ch <= 90 ; ++ch)
    {
        fputc(ch, fp);
    }
    fputc('\n', fp);

    //close the file
    fclose(fp);
    printf("A to Z written to the created file\n");
    return 0;
}
