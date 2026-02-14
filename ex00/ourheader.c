#include "ourheader.h"

void	ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return(i);
}

int	ft_atoi(char *str)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
			a = -a;
		if(*str == '+')
			a = a + 1;
		str++;
	}
	while(*str <= '9' && *str >= '0')
	{
		b = b * 10 + (*str - '0');
		str++;
	}
	if (a < 0)
		b = -b;
	return (b);
}

int	ft_is_number(char *str)
{
	int i;

	if (!str || str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}