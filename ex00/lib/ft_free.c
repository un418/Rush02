/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:21:26 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 18:40:47 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

// Function to free 2 strings at the same time
void	ft_free(char *str1, char *str2)
{
	free(str1);
	free(str2);
}
