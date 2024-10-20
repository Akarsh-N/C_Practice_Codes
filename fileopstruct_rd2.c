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
    //structure variable
    s_employee sAmlendraInfor =  {0};
    //file pointer
    FILE *fp = NULL;

    //open the existing file
    fp = fopen("aticleworld2.bin", "rb");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    //Reads the contents of a structure variable from file
    while(fread(&sAmlendraInfor, sizeof(sAmlendraInfor),1, fp) == 1)
    {
        printf("id: %d \n", sAmlendraInfor.id);
        printf("First Name: %s \n", sAmlendraInfor.fName);
        printf("Last Name: %s \n", sAmlendraInfor.lName);
    }

    fclose(fp);
    return 0;
}
