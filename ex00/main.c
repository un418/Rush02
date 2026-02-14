#include "ourheader.h"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
	if (!is_number(argv[1]))
	write(1, "Error\n", 6);
	}
	else if (argc == 3)
	{
	if (!is_number(argv[2]))
	write(1, "Error\n", 6);
	}
	else
	write(1, "Error\n", 6);
	return (0);
}