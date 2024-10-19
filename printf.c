#include<stdio.h>

int main()
{
    char name[30];
	printf("Enter name:\n"); 
	fflush(stdout);
	scanf("%[^\n]s",name); //scanf("%[^s]s",name)
	printf("Name is %s\n",name);
	fflush(stdout);
}
