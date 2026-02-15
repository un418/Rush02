/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:32:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 19:13:45 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

int	ft_arg(int argc, char **argv, char *filename)
{
	char	*default_filename;

	default_filename = "numbers.dict";
	if ((argc == 2 && !ft_is_number(argv[1]))
		|| (argc == 3 && !ft_is_number(argv[2])) || argc > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		free(filename);
		filename = malloc(sizeof(char) * ft_strlen(default_filename));
		ft_strcpy(filename, default_filename);
		return (0);
	}
	if (argc == 3)
	{
		free(filename);
		filename = malloc(sizeof(char) * ft_strlen(argv[1] + 1));
		ft_strcpy(filename, argv[1]);
		return (0);
	}
	return (1);
}
