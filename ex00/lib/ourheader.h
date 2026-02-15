/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ourheader.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:52:59 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/15 19:07:28 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OURHEADER_H
# define OURHEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strlen(char *str);
int		ft_is_number(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_is_valid_number(char *line, char *argument_string);
int		ft_filesize(char *filename);
void	ft_file_to_char(char *filename, char *output_string);
void	ft_write_result(char *str, char *free_str1, char *free_str2);
char	*ft_strcpy(char *dest, char *src);
int		ft_arg(int argc, char **argv, char *filename);
void	ft_free(char *str1, char *str2);

#endif
