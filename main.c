#include <stdio.h>
#include "ft_printf.h"

int main ()
{
	printf("$%c$\n", 'H');
	ft_printf("$%c$\n", 'H');

	printf("Hola\n");
	ft_printf("Hola\n");
}
//gcc -Wall -Wextra -Werror -g main.c libftprintf.a && ./a.out
