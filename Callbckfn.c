#include <stdio.h>

typedef int* (*subt)(int *x);

void sub(subt m)
{
	int y = 50;
	int *x = m(&y);
	printf("Subtracted value is %d\n",*x);
}

int* subtract(int *k)
{
	*k -= 10;
	return k;
}

int main()
{
	sub(subtract);
	return 0;
}
