#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int Age;
    float Weight;
}sInfo;

int main(int argc, char *argv[])
{
 //create an array of structure;
 sInfo JhonFamilyInfo[2];
 //Create pointer to the structure
 sInfo *psInfo  = NULL;
 int iSizeofStructure = 0;
 //Assign the address of array to the pointer
 psInfo = JhonFamilyInfo; //psInfo = &JhonFamilyInfo[0];


 // Subtract the pointer
    iSizeofStructure = (char *)(psInfo + 1) - (char *)(psInfo);
    printf("Size of int  =  %ld\n",sizeof(int));
    printf("Size of float  =  %ld\n",sizeof(float));
    printf("Size of char  =  %ld\n\n",sizeof(char));


    printf("Size of structure  =  %d\n",iSizeofStructure);
    printf("char Size of structure after increment =  %p\n",(char *)(psInfo + 1));
    printf("char Size of structure  =  %p\n",(char *)(psInfo));


    iSizeofStructure = (char *)(psInfo + 2) - (char *)(psInfo);
    printf("Size of structure  =  %d\n",iSizeofStructure);
    printf("char Size of structure after increment =  %p\n",(char *)(psInfo + 2));
    printf("char Size of structure  =  %p\n",(char *)(psInfo));

    iSizeofStructure = (int *)(psInfo + 1) - (int *)(psInfo);
    printf("Size of structure  =  %d\n",iSizeofStructure); // (Value o/p * (int databytes))i.e 2 * 4 Bytes
    printf("Int Size of structure after increment =  %p\n",(int *)(psInfo + 1));
    printf("Int Size of structure  =  %p\n",(int *)(psInfo));

    iSizeofStructure = (int *)(psInfo + 2) - (int *)(psInfo);
    printf("Size of structure  =  %d\n",iSizeofStructure); // (Value o/p * (int databytes))i.e 4 * 4 Bytes
    printf("Int Size of structure after increment =  %p\n",(int *)(psInfo + 2));
    printf("Int Size of structure  =  %p\n",(int *)(psInfo));

 return 0;
}
