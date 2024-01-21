#include <stdio.h>
#include "ft_printf.h"

int main ()
{
	printf("Hola\n");
	ft_printf("Hola\n\n");
	printf("$%c$\n", 'H');
	ft_printf("$%c$\n\n", 'H');
	printf("$%s$\n", "Hola");
	ft_printf("$%s$\n\n", "Hola");
	int count = 0;
	printf("%d\n\n", count);
	count = printf("%c\n", 'H');
	printf("%d\n\n", count);
	count = ft_printf("¡Adiós mundo cruel!\n");
	printf("%d\n\n", count);
}
//gcc -Wall -Wextra -Werror -g main.c libftprintf.a && ./a.out
