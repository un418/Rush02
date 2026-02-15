#ifndef OURHEADER_H
#define OURHEADER_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		ft_strlen(char *str);
int		ft_is_number(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_is_valid_number(char *line, char *argument_string);
int		ft_filesize(char *filename);
void	ft_file_to_char(char *filename, char *output_string);
void	ft_write_result(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_arg(int argc, char **argv, char *filename);

#endif
