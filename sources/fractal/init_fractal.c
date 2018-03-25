/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fractal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 17:01:29 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/25 21:05:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstdlib.h>
#include <fractal.h>

static void					init_fractal_functions(t_fractal *f)
{
	f->fractals[0] = &mandelbrot;
}

static void					init_color_functions(t_fractal *f)
{
	f->color_modes[0] = &blend_color_mode;
}

static void					init_hooks(t_fractal *f)
{
	add_hook(f->window, MOUSE_MOVE, &mouse_move_hook, f);
	add_hook(f->window, KEY_PRESS, &key_press_hook, f);
	add_hook(f->window, MOUSE_BUTTON_PRESS, &mouse_press_hook, f);
	add_hook(f->window, MOUSE_BUTTON_RELEASE, &mouse_release_hook, f);
}

static void					init_default(t_fractal *f)
{
	f->zoom = DEFAULT_ZOOM;
	f->mx = DEFAULT_MX;
	f->my = DEFAULT_MY;
	f->iter = DEFAULT_ITERATIONS;
	f->bail = DEFAULT_BAIL;
}

int							init_fractal(t_fractal **f, int ac, char **av)
{
	if (ac == 2 && f && (*f = (t_fractal*)ft_memalloc(sizeof(t_fractal))))
	{
		if (((*f)->type = get_fractal(av[1])) == -1)
		{
			ft_memdel((void**)f);
			return (0);
		}
		(*f)->window = get_window(av[0], WIN_DEF_WIDTH, WIN_DEF_HEIGHT);
		init_default(*f);
		init_hooks(*f);
		init_fractal_functions(*f);
		init_color_functions(*f);
		update_fractal_window(*f);
		return (1);
	}
	return (0);
}
