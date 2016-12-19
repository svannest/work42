/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:39:34 by svannest          #+#    #+#             */
/*   Updated: 2016/12/16 10:24:46 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tetriminos.h"

/*
** delete all the \n in the string and put \0 at the end of it
*/

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

/*
** search a char and replace with another one
*/

char		*ft_snr(char *str, char s, char r)
{
	int		i;
	char	*new;

	i = 0;
	new = ft_strdup(str);
	while (str[i])
	{
		if (str[i] == s)
		{
			new[i] = r;
		}
		i++;
	}
	str = ft_strdup(new);
	return (str);
}

/*
** put all the tetri and their coordinates in a triple array
*/

void            say_check(char *newstr)
{
	int		i;
	int		j;
	char	**tab;
	char	***tri = NULL;

	i = 0;
	j = 0;
	tab = ft_strsplit(newstr, 'p');
	while (tab[j])
		j++;
	tri = malloc(sizeof(char **) * (j + 1));
	while (tab[i])
	{
		tab[i] = ft_strdup(ft_snr((sort_tetri(tab[i])), '#', i + 'A'));
		tri[i] = ft_strsplit(tab[i], '\n');
		i++;
	}
	tri[i] = NULL;
	init_tetri(tri);
}

/*
** determinate wich type of tetri is the first of the string
*/

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
