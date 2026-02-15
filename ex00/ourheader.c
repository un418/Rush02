#include "ourheader.h"

void ft_write_number(char *str)
{
	int a = 0;

	while(!((str[a] >= 'a' && str[a] <= 'z' ) || (str[a] >= 'A' && str[a] <= 'Z' )))
		a++;
	while(str[a] != '\n' && str[a] != '\0')
		write(1, &str[a++], 1);
	write(1, "\n", 1);
}

/* 
// Main to test ft_file_to_char & ft_filesize
#include <stdio.h>
int	main(void)
{
	char *dict;
	char filename[] = "numbers.dict";
	int filesize = ft_filesize(filename);

	printf("size of file=%d",filesize);

	dict = malloc(ft_filesize(filename));
	ft_file_to_char(filename, dict);
	printf("dict=%s",dict);

	return 0;
} */


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