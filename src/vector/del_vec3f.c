/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_vec3f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:23:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:10:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <ftstdlib.h>

void					del_vec3f(t_vec3f **vp)
{
	if (vp && *vp)
		ft_memdel((void**)vp);
}
