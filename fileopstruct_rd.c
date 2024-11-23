#include <stdio.h>
#include <stdlib.h>

//structure
typedef struct
{
    int id;
    char fName[16];
    char lName[16];
} s_employee;

int main()
{
    //Array of structure variable
    s_employee sAticleworldEmplInfo[6]=  {0};
    //file pointer
    FILE *fp = NULL;

    //open the existing file
    fp = fopen("aticleworld.bin", "rb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Reads the 6 first element of the array of structure
    fread(sAticleworldEmplInfo, sizeof(sAticleworldEmplInfo),6, fp);

    for(int i=0;i<6;i++)
    {
        printf("id: %d \n", sAticleworldEmplInfo[i].id);
        printf("First Name: %s \n", sAticleworldEmplInfo[i].fName);
        printf("Last Name: %s \n", sAticleworldEmplInfo[i].lName);
    }

    fclose(fp);
    return 0;
}
