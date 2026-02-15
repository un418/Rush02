/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:06:37 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 15:06:41 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ourheader.h"

int	ft_is_valid_number(char *line, char *argument_string)
{
	int len = ft_strlen(argument_string);

	if (ft_strncmp(line, argument_string, len) == 0 && (line[len] == ':' || line[len] == ' ')) 
		return 1;
return 0;
}
