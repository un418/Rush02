/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:07:34 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 18:45:16 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

// Function to get the size of a file
int	ft_filesize(char *filename)
{
	int		fd;
	int		size;
	int		ret;
	char	buffer[1];

	size = 0;
	ret = 1;
	fd = open(filename, O_RDONLY);
	while (ret > 0)
	{
		ret = read(fd, buffer, 1);
		size++;
	}
	close(fd);
	return (size);
}
