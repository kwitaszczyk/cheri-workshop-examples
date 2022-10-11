#include <stdio.h>

int
main(void)
{
	int data;
	void *ptr;

	ptr = &data;
	printf("size of pointer: %zu\n", sizeof(ptr));
	printf("address from pointer: %p\n", ptr);
	printf("pointer: %#p\n", ptr);
	printf("address from capability: %lp\n", ptr);
	printf("capability: %#lp\n", ptr);
	return (0);
}
