/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 03:41:31 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/07/27 21:00:33 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*reading_buffer(int fd, char *lines)
{
	char	*buffer;
	int		i;

	i = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (NULL);
	while (i && (ft_strchr(lines, '\n')) == NULL)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		lines = ft_strjoin(lines, buffer);
	}
	free (buffer);
	return (lines);
}

char	*line_split(char *lines)
{
	int	i;

	i = 0;
	if (lines[i] == '\0')
		return (NULL);
	while (lines[i] != '\n' && lines[i])
		i++;
	return (ft_substr(lines, 0, ++i));
}

char	*lines_rest(char *res)
{
	int		j;
	char	*temp;

	j = 0;
	while (res[j] != '\n' && res[j])
		j++;
	if (res[j] == '\0')
	{
		free(res);
		return (NULL);
	}
	temp = ft_substr(res, ++j, ft_strlen(res));
	free(res);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*res;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	res = reading_buffer(fd, res);
	if (res == NULL)
		return (NULL);
	temp = line_split(res);
	res = lines_rest(res);
	return (temp);
}
