/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 03:41:31 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/07/08 00:24:09 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	find_next_break(char *text)
{
	size_t	i;

	i = 0;
	if (!text)
		return (0);
	while (text[i] != '\n' && text[i])
		i++;
	if (text[i] == '\n')
		return (i + 1);
	return (0);
}


char    *get_next_line(int fd)
{
	
}
