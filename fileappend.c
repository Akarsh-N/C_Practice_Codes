#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ascii value of 1
    int ch = 52;
    FILE *fp = NULL;

    //Open file in append mode
    fp = fopen("aticleworld.txt", "a");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Write 1 in file
    fputc(ch, fp);
    fputs(" Hello There, I hope this article will help!\n",fp);
    //close the file
    fclose(fp);
    puts("I am first Line.");
    puts("I am Second Line.");
    printf("Append 4 to the created file\n");
    return 0;
}
