/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:54:43 by svannest          #+#    #+#             */
/*   Updated: 2016/12/16 15:55:11 by joinacio         ###   ########.fr       */
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

void		s_ma(char *malloc)
{
	if (malloc == NULL)
	{
		ft_putstr("malloc() failed\n");
		exit(0);
	}
}

void		s_op(int open)
{
	if (open == -1)
	{
		ft_putstr("open() failed\n");
		exit(0);
	}
}

void		s_rd(int read)
{
	if (read == -1)
	{
		ft_putstr("read() failed\n");
		exit(0);
	}
}


char		*fic_in(char *av)
{
	int i;
	int fd;
	char *str;
	char *tmp;

	i = 0;
	s_ma(tmp = malloc(sizeof(*tmp) * BUFF_SIZE));
	s_op(fd = open(av, O_RDONLY));
	s_rd(i = read(fd, tmp, BUFF_SIZE));
	s_ma(str = malloc(sizeof(*str) * i));
	s_op(fd = open(av, O_RDONLY));
	if ((i = read(fd, str, i)) > 0)
	{
		str = ft_strdup(tmp);
		free (tmp);
	}
	verif_taille_char(str);
	return (str);
}
