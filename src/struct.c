/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 10:00:09 by joinacio          #+#    #+#             */
/*   Updated: 2016/12/16 12:40:33 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "tetriminos.h"

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

int				tstcoord(char **tab,char **grid, int x, int y)
{
	int i=0;
	int j=0;


	while (tab[i])
	{
		while (tab[i][j])
		{
			if ((tab[i][j] != '.') && (grid[x + i][y + j] != '.'))
				return (1);
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void			inscoord(char **tab,char **grid, int x, int y)
{
	int i=0;
	int j=0;


	while (tab[i])
	{
		while (tab[i][j])
		{
			if ((tab[i][j] != '.') && (grid[x + i][y + j] == '.'))
			{
				grid[x + i][y + j] = tab[i][j];
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
		i = 2;
	if (pcs == 2)
		i = 3;
	else 
		while (i * i / 4 <= pcs)
		i++;
	return (i);
}

t_grid 			gridmaker(t_grid g)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	g.tab = malloc(sizeof(char*) * g.size + 1);
	while (a < g.size)
	{
		g.tab[a] = malloc(sizeof(char) * g.size + 1);
		while(b < g.size)
		{
			g.tab[a][b] = '.';
			b++;
		}
		g.tab[a][b] = '\0';
		b = 0;
		a++;
	}
	g.tab[a] = NULL;
	return (g);
}
//void			ins_s(char ***tri)
//{
	//	int		j;
	//	char	**tab;

	//	j = 0;
	//	tab = NULL;
	//	while (tri[j])
	//	{
	//	ft_puttab(tri[j]);
	//	j++;
	//	}
	//	ft_putchar('\n');
	//	tab = grid(mingrid(j));
	//	tab[1][1] = '@';
	//	if(tstcoord(tri[0], tab, 0, 0) == 0)
	//		inscoord(tri[0], tab, 0, 0);
	//	ft_puttab(tab);
	//	ft_putchar('\n');
	//	ft_putchar('\n');
	
//}

// debut de l'insert de structures

//affichage des coord tetri
void			init_grid(t_tetri *tetri)
{
	t_grid	g;

	g.size = mingrid(tetri[0].totaloftetri);
	g = gridmaker(g);
}

void			put_coordtetri(t_tetri f)
{
		int g;

		g = 0;
		ft_putnbr(f.index);
		ft_putchar('\t');
		while (g < 4)
		{
			ft_putchar('[');
			ft_putnbr(f.coord[g].x);
			ft_putchar(':');
			ft_putnbr(f.coord[g].y);
			ft_putchar(']');
			g++;
		}
		ft_putchar('\n');

}

t_tetri			stru_coord(char **tab)
{
	int i;
	int j;
	int k;
	t_tetri z;

	i = 0;
	j = 0;
	k = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] != '.')
			{
				z.coord[k].x = i;
				z.coord[k].y = j;
				k++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (z);
}

void			init_tetri(char ***tri)
{
	t_tetri 	*tetri;
	int     	i;
	int 		g;
	int 		j;

	j = 0;
	while (tri[j])
		j++;
	tetri = malloc(sizeof(t_coord) * j);
	i = 0;
	g = 0;
	while (tri[i])
	{
		tetri[i] = stru_coord(tri[i]);
		tetri[i].index = i;
		tetri[i].totaloftetri = j - 1;
		put_coordtetri(tetri[i]);
		i++;
	}
	//init_grid(tetri);
}
// fin de l'insert de structures
