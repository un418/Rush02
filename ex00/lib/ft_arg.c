/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:32:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/18 15:42:18 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

// Function to manage argument send by user
// - Return error if nb of argument not suffisent or if the input send is not number
// - If one parameters send it will be the searched number and we use default dictionnary
// - If two parameters the first one will be the dictionnary to use and the second one the number to search
int	ft_arg(int argc, char **argv, char *filename)
{
	char	*default_filename;

	default_filename = "numbers.dict";
	// - Return error if nb of argument not suffisent or if the input send is not number
	if ((argc == 2 && !ft_is_number(argv[1])) || (argc == 3 && !ft_is_number(argv[2])) || argc > 3 || argc == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// - If one parameters send it will be the searched number and we use default dictionnary
	if (argc == 2)
	{
		free(filename);
		filename = malloc(sizeof(char) * ft_strlen(default_filename));
		ft_strcpy(filename, default_filename);
		return (0);
	}
	// - If two parameters the first one will be the dictionnary to use and the second one the number to search
	if (argc == 3)
	{
		free(filename);
		filename = malloc(sizeof(char) * ft_strlen(argv[1] + 1));
		ft_strcpy(filename, argv[1]);
		return (0);
	}
	return (1);
}
