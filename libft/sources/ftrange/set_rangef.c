/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_rangef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:27:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/15 18:57:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftrange.h>

void					set_rangef(t_rangef rf, float min, float max)
{
	(void)rf;
	rf.min = min;
	rf.max = max;
}