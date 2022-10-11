#include <sys/types.h>

void
loss_of_provenance(long x){
	*(char *)x = 'A';
}

void
ambiguous_provenance(void *ptr1, void *ptr2)
{
	void *newptr;

	newptr = (void *)(((uintptr_t)ptr1 & 0x3) | (uintptr_t)ptr2);
}

void
underaligned_capability()
{
	struct {
		void *data;
	} obj __attribute__((aligned(8)));
}

int
main(void)
{

	return (0);
}
