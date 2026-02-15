/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:05:52 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 15:05:57 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;
	c = 0;
	while( c < n && ((*s1) || (*s2)))
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
			c++;
		}
		else
		{
			return(*s1 - *s2);
		}
	}
	return 0;
}
