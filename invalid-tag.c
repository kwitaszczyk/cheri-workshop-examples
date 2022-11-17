#include <sys/types.h>

int
main(void)
{
	int x, *ptr;

	ptr = &x;
	*ptr = 1;

	*(char *)&ptr = 'A';
	*ptr = 2;

	return (0);
}
