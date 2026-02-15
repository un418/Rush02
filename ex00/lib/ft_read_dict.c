/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:16:03 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 19:30:01 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

int	ft_read_dict(char *dict, char **argv, int argc, char *filename)
{
	int a;
	int i;

	i = 0;
	if (argc == 2)
		a = 1;
	if(argc == 3)
		a = 2;
	while (dict[i])
	{
		if (dict[i] == argv[a][0])	
		{
			if (ft_is_valid_number(&dict[i], argv[a]))
			{
				ft_write_result(&dict[i], dict, filename);
				return (0);
			}
		}
		i++;
	}
	ft_free(dict, filename);
	write(2, "Dict Error\n", 11);
	return(1);
}