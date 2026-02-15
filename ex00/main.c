#include "ourheader.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *dict;
	char *filename;
	int i;
	
	char default_filename[]="numbers.dict";

	if (argc == 2)
	{
		if (!ft_is_number(argv[1]))
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		filename = default_filename;
	}
	else if (argc == 3)
	{
		if (!ft_is_number(argv[2]))
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		filename = argv[1];
	}
	else
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
	dict = malloc(ft_filesize(filename)+ 1);
	ft_file_to_char(filename, dict);
	// printf("dict=%s",dict); // Debug to remove later
	i = 0;
	while (dict[i])
	{
		if (dict[i] == argv[1][0])
		{
			if (ft_is_valid_number(&dict[i],argv[1]))
			{
				ft_write_number(&dict[i]);
				exit(EXIT_SUCCESS);
			}
		}
		i++;
	}
	free(dict);
	write(2, "Dict Error\n", 11);
	return (1);
}
