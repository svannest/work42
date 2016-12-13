/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 10:51:03 by svannest          #+#    #+#             */
/*   Updated: 2016/12/08 17:28:12 by svannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetriminos.h"
#include "libft.h"

int		main(int ac, char **av)
{
	char	*str;

	if (ac != 2)
	{
		ft_putstr("usage: fillit source_file\n");
		return (0);
	}
	str = fic_in(av[1]);
	return (0);
}
