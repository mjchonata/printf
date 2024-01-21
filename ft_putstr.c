//Si el argumento correspondiente a %s o el campo Buffer del argumento que corresponde a %Z, es un puntero nulo, se mostrará "(null)".

#include "ft_printf.h"

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

int	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	return (write (1, &str, len));
}
