#include <string.h>
#include <stdio.h>

int Memcpy(void* dst, const void* src, unsigned int cnt);

int main()
{
char *pszMessage  = "Welcome to Utthunga!";//Source String
char aszDisplayMessage[32]={0}; //Destination string
short siLenString = 0;  //
siLenString = strlen(pszMessage)+1; // length of source string
Memcpy(aszDisplayMessage, pszMessage,siLenString );//copy source to destination
printf("Message = %s\n", aszDisplayMessage);

int iLoop = 0;
int aiSrc[5]  = {100,200,300,400,500};//integer array
int aiDst[5] = {0}; //Destination array
Memcpy(aiDst, aiSrc , sizeof(aiSrc));//copy integer array
for(iLoop =0; iLoop <5 ; iLoop++) //print
{
 printf("%d ",aiDst[iLoop]);
}
printf("\n");
return 0;
}

int Memcpy(void* dst, const void* src, unsigned int cnt)
{
 unsigned char *pszDest = (unsigned char *)dst;
 const unsigned char *pszSource =( const unsigned char*)src;
 while(cnt)
  {
    *pszDest++ = *pszSource++;
     cnt--;
  }
 return 0;
}
