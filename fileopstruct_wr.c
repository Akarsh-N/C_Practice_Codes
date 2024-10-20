#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char fName[16];
    char lName[16];
} s_employee;

int main(void)
{
    //Populate variable of array of structure
    s_employee sAticleworldEmplInfo[] =
    {
        {1, "Amlendra", "Mishra"},
        {2, "Pooja", "Mishra"},
        {3, "Apoorv", "Mishra"},
        {4, "Amitosh", "Mishra"},
        {5, "Maya", "Mishra"},
        {6, "Uday", "Mishra"},
    };
    //file pointer
    FILE *fp = NULL;

    //create and open the text file
    fp = fopen("aticleworld.bin", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    
    //write the structure array in file
    fwrite(sAticleworldEmplInfo, sizeof(sAticleworldEmplInfo),1, fp); //very important

    fclose(fp);
    return 0;
}

