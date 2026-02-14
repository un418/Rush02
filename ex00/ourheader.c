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

// @adaferna - Added my ft_strncmp but never be evaluated on this project
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n != 0)
	{
		while (s1[i] && i <= n)
		{
			diff = diff + s1[i];
			i++;
		}
		i = 0;
		while (s2[i] && i <= n)
		{
			diff = diff - s2[i];
			i++;
		}
	}
	return (diff);
}

int	ft_is_valid_number(char *line, char *argument_string)
{
	int len = ft_strlen(argument_string);

	if (ft_strncmp(line, argument_string, len) == 0 && (line[len] == ':' || line[len] == ' ')) 
		return 1;
return 0;
}

// Function to get the size of a file
// Calculation bytes by bytes - probably improvable
int	ft_filesize(char *filename)
{
	int		fd;
	int		size;
	int		ret;
	char	buffer[1];


	size = 0;
	fd = open(filename, O_RDONLY);
	while ((ret = read(fd, buffer, 1)) > 0)
	{
		size++;
	}
	return (size);
	close(fd);
}

// Function to put the content of the file in a string
void	ft_file_to_char(char *filename, char *output_string)
{
	int		fd;
	int		ret;
	char	buffer[1];
	int		i; 

	i = 0; 

	fd=open(filename, O_RDONLY);

	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
		exit(EXIT_FAILURE);
	}
	while ((ret = read(fd, buffer, 1)) > 0)
	{
		output_string[i] = buffer[0];
		i++;
	}
	if (ret == -1) // Error when reading the file
	{
		write(2, "Dict Error\n", 11);
		exit(EXIT_FAILURE);
	}
	close(fd);
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