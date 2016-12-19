/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 11:17:48 by svannest          #+#    #+#             */
/*   Updated: 2016/12/16 15:54:40 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tetriminos.h"

void		verif_taille_char(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
		{
			ft_putstr("C or T error\n");
			exit(1);
		}
		i++;
	}
	if (i >= 546)
	{
		ft_putstr("C ou T error\n");
		exit(1);
	}
	if (verif_norm(str) == 1)
	{
		ft_putstr("Norm KO\n");
		exit(1);
	}
	insert_p(str);
}

int			verif_norm(char *str)
{
	int		i;
	int		ligne;

	i = 0;
	ligne = 0;
	while (str[i])
	{
		if (ligne == 4 && str[i] == '\n')
		{
			ligne = 0;
			i++;
		}
		if (str[i + 4] == '\n' && str[i + 3] != '\n' && str[i + 2] != '\n' &&
			str[i + 1] != '\n' && str[i] != '\n')
		{
			ligne++;
			i = i + 5;
		}
		else if (str[i] == '\0' && str[i - 2] == '\n')
			return (1);
		else
			return (1);
	}
	return (0);
}

void		cont_tetri(char *str)
{
	int		i;
	int		d;

	d = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != 'p' && str[i])
		{
			if (str[i] == '#')
				d++;
			i++;
		}
		if (d != 4)
		{
			ft_putstr("# KO\n");
			exit(1);
		}
		d = 0;
		if(str[i] == 'p')
			i++;
	}
	clean_str(str);
}

void		insert_p(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i + 1] == '\n')
			str[i + 1] = 'p';
		i++;
	}
	cont_tetri(str);
}
