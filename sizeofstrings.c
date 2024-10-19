#include<stdio.h>
#include<string.h>

int main()
{
	char msg1[] = "Hello";    
	char msg2[] = {'H','e','l','l','o','\0'};
	char msg3[] = {'H','e','l','l','o','f','d'};
    char msg4[10] = "Hello";

	printf("Size of msg1 is %ld\n",sizeof(msg1));
	printf("Size of msg2 is %ld\n",sizeof(msg2));
	printf("Size of msg3 is %ld\n",sizeof(msg3));
    printf("Size of msg4 is %ld\n",sizeof(msg4));

    printf("String len of msg1 is %ld\n",strlen(msg1));
	printf("String len of msg2 is %ld\n",strlen(msg2));
    printf("String len of msg3 is %ld\n",strlen(msg3));

    printf("Addr of msg1 is %p\n",&msg1);
	printf("Addr of msg2 is %p\n",&msg2);

    char msg5[] = "Hello,how are you?"; //(string literals) Message 1 will be in flash will be copied during
	                            // run time execution of main func to RAM,which is not done by start up code
	char const *msg6 = "New Hello structu"; //(string literals)Will be in Flash memory which will not be copied to flash 
	                                // instead RAM memory local variable points to Flash memory address							
    msg5[2] = 'b';
	//msg6[2] = 'b'; //error: assignment of read-only location '*(msg + 2u)'

	printf("Message 1 is %s\n",msg5);
	printf("Addr of msg1 is %p\n",&msg5);
	printf("Value of msg1 is %p\n",msg5);	
	
	printf("Message is %s\n",msg6);
	printf("Addr of msg1 is %p\n",&msg6); //variable in RAM Memory
	printf("Value of msg1 is %p\n",msg6); //In flash memory

	return 0;
}
