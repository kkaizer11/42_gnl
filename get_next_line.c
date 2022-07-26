/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 03:41:31 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/07/25 19:14:35 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	find_next_break(char *buffer)
{
	size_t	i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i])
		i++;
	if (buffer[i] == '\n')
		return (i);
	return (0);
}

char	*cut_line(char *buffer)
{
	size_t	i;
	int		nl_pos;
	char	*temp;

	nl_pos = find_next_break(str);
	temp = ft_strndup(buffer, nl_pos);
	free(temp);
	return (temp);
}

char	read_buffer(int fd, char *buffer)
{
	
}

char    *get_next_line(int fd)
{
	
}
