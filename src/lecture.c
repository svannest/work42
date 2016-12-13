/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:54:43 by svannest          #+#    #+#             */
/*   Updated: 2016/12/13 10:49:17 by svannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"
#include "tetriminos.h"
# define BUFF_SIZE 546
/*
char		*chaine_t(char *buffer, int size)
{
	char	*new;
	int		i;

	i = 0;
	if (buffer == NULL)
		return (0);
	new = malloc(sizeof(*new) * (size + 1));
	if (!new)
		return (NULL);
	while (i < size)
	{
		new[i] = buffer[i];
		i++;
	}
	free(buffer);
	return (new);
}

char		*fic_in(char *av)
{
	int		fd;
	char	*buffer;
	int		i;

	i = 0;
	buffer = malloc(sizeof(*buffer) * 1);
	if (!buffer)
		return (0);
	if ((fd = open(av, O_RDONLY)) == -1)
	{
		ft_putstr("open fail\n");
		return (0);
	}
	while (read(fd, buffer + i, 1))
	{
		buffer = chaine_t(buffer, i + 1);
		i++;
	}
	buffer[i] = '\0';
	close(fd);
	verif_taille_char(buffer);
	return (buffer);
}*/

char		*fic_in(char *av)
{
	int i;
	int l;
	int fd;
	char *str;

	i = 0;
	str = malloc(sizeof(*str) * BUFF_SIZE);
	fd = open(av, O_RDONLY);
	i = read(fd, str, BUFF_SIZE);
	str[i] = '\0';
	l = ft_strlen(str);
//	free(str);
	str = malloc(sizeof(*str) * l);
	fd = open(av, O_RDONLY);
	i = read(fd, str, BUFF_SIZE);
	str[i] = '\0';
	verif_taille_char(str);
	return (str);
}
