#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char fName[16];
    char lName[16];
} s_employee;

int main()
{
    //Populate structure variable
    s_employee sAmlendraInfor =  {8886, "Amlendra", "Mishra"};
    //file pointer
    FILE *fp = NULL;

    //create and open the text file
    fp = fopen("aticleworld2.bin", "wb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //write the structure in file
    fwrite(&sAmlendraInfor, sizeof(sAmlendraInfor),1, fp);

    fclose(fp);
    return 0;
}
