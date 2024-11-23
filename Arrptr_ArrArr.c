#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct
{
  int *data;
  char datalength;
}buffer_t;

int main(void)
{
	buffer_t buffer;
	int a[5] = {1,2,3,4,5};
	int i;

	buffer.data = a;

	printf("buffer.data as Array\n");
	for(i=0 ; i<5 ; i++)
	{
		printf("buffer.data[%d]: %d\n",i,buffer.data[i]);	// Pointer as Array
	}

	printf("buffer.data as Pointer\n");
	for(i=0 ; i<5 ; i++)
	{
		printf("*(buffer.data + %d): %d\n",i,*(buffer.data + i)); // Pointer as pointer
	}

	printf("Size of array : %ld\n",sizeof(a));			//Array as Array
	printf("Size of array : %ld\n",sizeof(*(a + 1)));
	printf("Size of array : %ld\n",sizeof(*a));			//Array as pointer (Size varies - exception)
	printf("Size of array : %ld\n",sizeof(buffer.data));

	printf("buffer.data Base Address : %p\n",&buffer.data);			//Pointer variable base address
	printf("buffer.data Base Address : %p\n",&a);				 	//Array Base address
	printf("buffer.data Base Address : %p\n",buffer.data);			//Pointer value (Holds array address)

	/*Is Array a Pointer?? :
	 Array name is like a pointer variable,
	 [] is like * operater (i.e Dereferencing operator),
	 Step 'n' elements forward, to fetch the particular data where the pointer points to. (i.e array size)

	As Array name is a pointer, Array is a pointer. (except during sizeof)*/
	return 0;
}
