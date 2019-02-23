/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 17:06:34 by dstracke          #+#    #+#             */
/*   Updated: 2019/02/23 09:27:33 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		newline(char **line, char **box, int fd)
{
	int			i;
	char		*tmp;

	i = 0;
	while (box[fd][i] != '\n' && box[fd][i] != '\0')
		i++;
	if (box[fd][i] == '\n')
	{
		*line = ft_strsub(box[fd], 0, i);
		tmp = ft_strdup(box[fd] + i + 1);
		free(box[fd]);
		box[fd] = tmp;
	}
	else
	{
		*line = ft_strdup(box[fd]);
		ft_strdel(&box[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*box[FD_MAX];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || !line || fd > FD_MAX || \
			read(fd, buff, 0) < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (box[fd] == NULL)
		box[fd] = ft_strnew(1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(box[fd], buff);
		free(box[fd]);
		box[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (box[fd][0] == '\0')
		return (0);
	return (newline(line, box, fd));
}
