#include <stdio.h>
#include "ft_printf.h"

void print_size(int size)
{
	printf("%d\n", size);
}

//para pasar la misma variable a ambas funciones --> #define
#define WRITE_HOLA "Hola\t"
void test_no_conversion()
{
	int			size;

	size = printf(WRITE_HOLA);
	print_size(size);
	size = ft_printf(WRITE_HOLA);
	print_size(size);
	ft_printf("\n");
}

#define WRITE_CHAR "$%c$\t"
void test_char()
{
	int		size;
	const char	character = 'H';

	size = printf(WRITE_CHAR, character);
	print_size(size);
	size = ft_printf(WRITE_CHAR, character);
	print_size(size);
	ft_printf("\n");
}

#define WRITE_STR "$%s$\t"
void test_str()
{
	int		size;
	const char	*str = "¡Adiós mundo cruel!";

	size = printf(WRITE_STR, str);
	print_size(size);
	size = ft_printf(WRITE_STR, str);
	print_size(size);
	ft_printf("\n");
}

void test_str_null()
{
	int		size;

	size = printf(WRITE_STR, NULL);
	print_size(size);
	size = ft_printf(WRITE_STR, NULL);
	print_size(size);
	ft_printf("\n");
}

#include <string.h>
#include <sys/errno.h>
#define ERROR_ARGC "Error\n\tthis function expects 1 argv"
// int main ()
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(STDERR_FILENO, ERROR_ARGC, strlen(ERROR_ARGC));
		return (EINVAL);
	}
	if (argc == 1 || !strcmp(argv[1], "nc"))
		test_no_conversion();
	if (argc == 1 || strcmp(argv[1], "char") == 0)
		test_char();
	if (argc == 1 || strcmp(argv[1], "str") == 0)
	{
		test_str();
		test_str_null();
	}
}
//gcc -Wall -Wextra -Werror -g main.c libftprintf.a && ./a.out

//char **argv
//char *arg[]
// Adios mundo cruel

// Adios
// mundo
// cruel

// int main(void)
// int main(int argc, char **argv)
// int main(int argc, char **argv, char **env)

//  int main(int argc, char **argv)
// {
// 	(void)argc;
// 	(void)argv;
// 	if (argc != 3)
// 		printf("Error\n\tthis function expects 2 argv");
// 	else
// 		printf("OK,\t** working in progress **\n");
// }


// int main ()
// // int main(int argc, char **argv)
// {
// 	// (void)argc;
// 	// (void)argv;
// 	test_no_conversion();
// 	test_char();
// 	test_str();

	// printf("$%c$\n", 'H');
	// ft_printf("$%c$\n\n", 'H');
	// printf("$%s$\n", NULL);
	// ft_printf("$%s$\n", NULL);
	// // printf("$%s$\n", "Hola mundo");
	// ft_printf("$%s$\n\n", "Hola mundo");

	// int count = 0;
	// printf("%d\n\n", count);
	// count = printf("%c\n", 'H');
	// printf("%d\n\n", count);
	// count = ft_printf("¡Adiós mundo cruel!\n");
	// printf("%d\n\n", count);
	// count = ft_printf("$%s$\n", "Hola mundo");

	// printf("%d\n\n", count);
	// count = printf("$%s$\n", "Hola mundo");

	// printf("%d\n\n", count);

// int main(int argc, char **argv)
	// printf("$%d$\n", argc);
	// printf("$%s$\n", argv[0]);
	// printf("$%s$\n", argv[1]);
	// printf("$%s$\n", argv[2]);
	// printf("$%s$\n\n\n", argv[3]);

	// int i = 0;
	// while (i < argc)
	// {
	// 	printf("$%s$\n", argv[i]);
	// 	i++;
	// }
// }
