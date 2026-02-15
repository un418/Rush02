/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:21:11 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 18:40:02 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ourheader.h"

int	main(int argc, char **argv)
{
	char	*dict;
	char	*filename;
	int		i;

	filename = malloc(sizeof(char *));
	if (ft_arg(argc, argv, filename) != 0)
		return (1);
	dict = malloc(ft_filesize(filename)+ 1);
	ft_file_to_char(filename, dict);
	i = 0;
	while (dict[i])
	{
		if (dict[i] == argv[1][0])
		{
			if (ft_is_valid_number(&dict[i], argv[1]))
			{
				ft_write_result(&dict[i]);
				return (0);
			}
		}
		i++;
	}
	ft_free(dict, filename);
	write(2, "Dict Error\n", 11);
	return (1);
}
