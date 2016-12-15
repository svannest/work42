/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 10:39:34 by svannest          #+#    #+#             */
/*   Updated: 2016/12/15 14:15:49 by joinacio         ###   ########.fr       */
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

void			ft_puttab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putchar('\n');
		ft_putstr(tab[i]);
		i++;
	}
}

void			test_coord(char **tab)
{
	int i=0;
	int j=0;

	
	while (tab[i])
	{
		while(tab[i][j])
		{
			if (tab[i][j] != '.')
			{
				ft_putchar('[');
				ft_putnbr(i);
				ft_putchar(',');
				ft_putnbr(j);
				ft_putchar(']');
				j++;
			}
			else
				j++;
		}
	j = 0;
	i++;
	}
}

int				mingrid(int pcs)
{
	int		i;
	
	i = 0;
	if (pcs == 1)
		return (2);
	if (pcs == 2)
		return (3);
	while (i * i / 4 <= pcs)
		i++;
	return (i);
}

char 			**grid(int i)
{
	char	**g;
	int		a;
	int		b;

	a = 0;
	b = 0;
	g = malloc(sizeof(char*) * i + 1);
	while (a != i)
	{
		g[a] = malloc(sizeof(char) * i + 1);
		while(b != i)
		{
		g[a][b] = '.';
		b++;
		}
	g[a][b] = '\0';
	b = 0;
	a++;
	}
	g[a] = NULL;
	return (g);
}

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
		tab[i] = ft_strdup(ft_snr((sort_tetri(tab[i])), i + 'A'));
		tri[i] = ft_strsplit(tab[i], '\n');
		i++;
	}
	tri[i] = NULL;
	j = 0;
	while (tri[j])
	{
	ft_puttab(tri[j]);
	ft_putchar('\t');
	test_coord(tri[j]);
	ft_putchar('\n');
	j++;
	}
	ft_puttab(grid(mingrid(j)));

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
