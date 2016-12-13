/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grille.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svannest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:06:36 by svannest          #+#    #+#             */
/*   Updated: 2016/12/13 12:01:53 by svannest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "tetriminos.h"
#include <stdlib.h>

typedef struct element element;
struct element
{
	int val;
	struct element *next;
};

typedef element *llist;
