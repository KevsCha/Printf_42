#include "ft_printf.h"

int main(void)
{
	//unsigned int temp1 = 2147483648 + 2147483647;
	int temp2 = 100;

	//printf("[original] %%u: %u %d\n", temp1, temp2);
	//ft_printf("[copia] %%u %u %d\n", temp1, temp2);

	//printf("[printf original] %x", temp2);
	ft_printf("%x\n", temp2);
	return (0);
}
	/*
	TODO:
	Hacer que i funcion develva el numero total de los caracteres que vaya a mostrar en pantalla
	*/