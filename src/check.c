/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:39:34 by svannest          #+#    #+#             */
/*   Updated: 2016/12/13 12:02:59 by svannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tetriminos.h"

void		clean_str(char *str)
{
	int		i;
	char	*newstr;
	int		j;

	newstr = ft_strdup(str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			i++;
		if (str[i] != '\n')
		{
			newstr[j] = str[i];
			i++;
			j++;
		}
	}
	while (j < i)
	{
		newstr[j] = '\0';
		j++;
	}
	say_check(newstr);
}

char		*ft_snr(char *str, char a)
{
	int		i;
	char	*new;

	i = 0;
	new = ft_strdup(str);
	while (str[i])
	{
		if (str[i] == '#')
		{
			new[i] = a;
		}
		i++;
	}
	str = ft_strdup(new);
	return (str);
}

void            say_check(char *newstr)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = ft_strsplit(newstr, 'p');
	while (tab[i])
	{
		ft_putstr(ft_snr(sort_tetri(tab[i]), j + 'A'));
//		ft_putchar('\t');
//		ft_putstr(tab[i]);
		ft_putchar('\n');
		ft_putchar('\n');
		i++;
		j++;
	}
}

char	*sort_tetri(char *str)
{
	if (ft_strstr(str, "#...#...#...#"))
		return ("#\n#\n#\n#");
	if (ft_strstr(str, "####"))
		return ("####");
	if (ft_strstr(str, "##..#...#"))
		return ("##\n#.\n#.");
	if (ft_strstr(str, ".#...#..##"))
		return (".#\n.#\n##");
	if (ft_strstr(str, "#...###"))
		return ("#..\n###");
	if (ft_strstr(str, "###...#"))
		return ("###\n..#");
	if (ft_strstr(str, ".#..###"))
		return (".#.\n###");
	if (ft_strstr(str, ".#..##...#"))
		return (".#\n##\n.#");
	if (ft_strstr(str, "###..#"))
		return ("###\n.#.");
	if (ft_strstr(str, "#...##..#."))
		return ("#.\n##\n#.");
	return (sort_tetri2(str));
}

char	*sort_tetri2(char *str)
{
	if (ft_strstr(str, ".##.##."))
		return (".##\n##.");
	if (ft_strstr(str, "#...##...#"))
		return ("#.\n##\n.#");
	if (ft_strstr(str, "##...##"))
		return ("##.\n.##");
	if (ft_strstr(str, ".#..##..#."))
		return (".#\n##\n#.");
	if (ft_strstr(str, "##...#...#"))
		return ("##\n.#\n.#");
	if (ft_strstr(str, "#...#...##"))
		return ("#.\n#.\n##");
	if (ft_strstr(str, "..#.###"))
		return ("..#\n###");
	if (ft_strstr(str, "###.#.."))
		return ("###\n#..");
	if (ft_strstr(str, "##..##"))
		return ("##\n##");
	else
		ft_putstr("error");
	return ("error");
}
