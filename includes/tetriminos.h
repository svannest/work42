/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 11:10:07 by svannest          #+#    #+#             */
/*   Updated: 2016/12/16 10:22:46 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRIMINOS_H
# define TETRIMINOS_H

char		*chaine_t(char *buffer, int size);

char		*fic_in(char *av);

void		verif_taille_char(char *str);

int			verif_norm(char *str);

void		cont_tetri(char *str);

void		insert_p(char *str);

void		clean_str(char *str);

void		say_check(char *newstr);

char		*snr(char *str, char a);

void        say_check(char *newstr);

char		*sort_tetri(char *str);

char		*sort_tetri2(char *str);

void		ft_puttab(char **tab);

int			tstcoord(char **tab,char **grid, int x, int y);

void		inscoord(char **tab,char **grid, int x, int y);

int			mingrid(int pcs);

char 		**grid(int i);

void		init_tetri(char ***tri);

typedef struct s_coord
{
    int     x;
    int     y;
}			t_coord;

typedef struct s_tetri
{
    t_coord coord[4];
    int     index;
    int 	totaloftetri;
}			t_tetri;

typedef struct s_grid
{
	int 	size;
	char 	**tab;
}			t_grid;

t_tetri		stru_coord(char **tab);

#endif
