/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:10:04 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 18:52:25 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

// Function to put the content of the file in a string
void	ft_file_to_char(char *filename, char *output_string)
{
	int		fd;
	int		ret;
	char	buffer[1];
	int		i;

	i = 0;
	ret = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	while (ret > 0)
	{
		ret = read(fd, buffer, 1);
		output_string[i] = buffer[0];
		i++;
	}
	if (ret == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	output_string[i + 1] = '\0';
	close(fd);
}
