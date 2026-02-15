/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:11:10 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 18:55:53 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

void	ft_write_result(char *str)
{
	int	a;

	a = 0;
	while (!((str[a] >= 'a' && str[a] <= 'z' )
			|| (str[a] >= 'A' && str[a] <= 'Z' )))
		a++;
	while (str[a] != '\n' && str[a] != '\0')
		write(1, &str[a++], 1);
	write(1, "\n", 1);
}
