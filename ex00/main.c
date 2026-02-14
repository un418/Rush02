#include "ourheader.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *dict;
	char *filename;
	
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

	// My first malloc
	dict = malloc(ft_filesize(filename));
	ft_file_to_char(filename, dict);
	printf("dict=%s",dict); // Debug to remove later

	free(dict);
	return (0);
}


