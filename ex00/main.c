/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaferna <adaferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:21:11 by adaferna          #+#    #+#             */
/*   Updated: 2026/02/18 14:58:45 by adaferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/ourheader.h"

int	main(int argc, char **argv)
{
	char	*dict;
	char	*filename;

	// en: Need to init the varaible of type ptr for compilation
	// pt: 
	filename = malloc(sizeof(char *));
	//en: Call the function to manage input from user: 1 arg use default arg ; 2arg use arg[1] as dict.file.path
	// 		if the return of ft_arg() function end the program and return 1 to the system (means errors)
	if (ft_arg(argc, argv, filename) != 0)
		return (1);
	// en: Allocate memory to the char that will store the dict content.
	// 		-> ft_filesize return the size of the file
	// 		-> +1 to ensure that we will be able to put the '\O' to symbolise the name of the string
	dict = malloc(ft_filesize(filename)+ 1);
	// en: Call the function that will copy the content of "filename" in the variable created just before called "dict"
	ft_file_to_char(filename, dict);
	// en: Call the function to read the dict, this function will call other function to parse the dictionary 
	// 		and return the desrired value if needed.
	return (ft_read_dict(dict, argv, argc, filename));
}