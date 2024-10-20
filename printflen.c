#include <stdio.h>
int main()
{
 int i =10000,j=20;
 int k;
 k=printf("%d\n",i) +  ++j;
 printf("Including \"\\n\" len is considered %d\n",k);
 return 0;
}
