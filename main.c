#include "ft_printf.h"

int main(void)
{
	int ds = 21232;
	void *d = &ds;
	ft_printf("%p", d);
	//printf("%p\n", d);
	unsigned long as = (unsigned long) d;
	//printf("%lu", as);
	return (0);
}