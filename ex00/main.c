/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:21:11 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 19:34:06 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ourheader.h"

int	main(int argc, char **argv)
{
	char	*dict;
	char	*filename;

	filename = malloc(sizeof(char *));
	if (ft_arg(argc, argv, filename) != 0)
		return (1);
	dict = malloc(ft_filesize(filename)+ 1);
	ft_file_to_char(filename, dict);
	return (ft_read_dict(dict, argv, argc, filename));
}
