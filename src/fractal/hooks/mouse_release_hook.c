/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_release_hook.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 19:28:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/31 15:10:39 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fractal.h>

int						mouse_release_hook(int btn, int x, int y, t_fractal *f)
{
	if (IN_IMAGE(x, y, FRACTAL_WIDTH, FRACTAL_HEIGHT))
	{
		set_vec2i(f->window->mouse->release, x, y);
		f->window->mouse->btn = btn;
		f->window->mouse->pressed = 0;
	}
	return (0);
}
