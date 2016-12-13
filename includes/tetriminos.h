/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 11:10:07 by svannest          #+#    #+#             */
/*   Updated: 2016/12/09 15:29:07 by joinacio         ###   ########.fr       */
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

char		*sort_tetri(char *str);

char		*sort_tetri2(char *str);

char		*snr(char *str, char a);

#endif
