/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec2i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:23:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/14 17:27:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

t_vec2i					get_vec2i(int x, int y)
{
	t_vec2i			v;

	v.x = x;
	v.y = y;
	return (v);
}
