/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_fractal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:27:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/27 04:06:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <window.h>
#include <fractal.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

static void				*update_image_part(void *arg)
{
	int					i;
	int					j;
	t_vec3i				pixel;
	t_fractal_thread	*ft;

	ft = (t_fractal_thread*)arg;
	i = ft->from_y;
	while (i < ft->to_y)
	{
		j = ft->from_x;
		while (j < ft->to_x)
		{
			pixel = get_vec3i(j, i,
			ft->fractal->fractals[ft->fractal->fractal_type](ft->fractal,
				i, j));
			pixel.z = ft->fractal->color_modes
				[ft->fractal->color_mode](ft->fractal, pixel.z);
			put_pixel(ft->fractal->window->image, &pixel);
			j++;
		}
		i++;
	}
	return (NULL);
}

t_fractal_thread		set_fractal_thread_props(int i, int j, int width,
int height)
{
	t_fractal_thread	ft;
	int					step_y;
	int					step_x;

	step_y = height / FRACTAL_THREADS_Y;
	ft.from_y = i * step_y;
	ft.to_y = ft.from_y + step_y;
	step_x = width / FRACTAL_THREADS_X;
	ft.from_x = j * step_x;
	ft.to_x = ft.from_x + step_x;
	return (ft);
}

void					update_fractal(t_fractal *f)
{
	int					i;
	int					j;
	t_fractal_thread	ft[FRACTAL_THREADS_X * FRACTAL_THREADS_Y];

	i = 0;
	while (!(j = 0) && i < FRACTAL_THREADS_Y)
	{
		while (j < FRACTAL_THREADS_X)
		{
			ft[i * FRACTAL_THREADS_X + j] = set_fractal_thread_props(i,
									j, f->window->width, f->window->height);
			ft[i * FRACTAL_THREADS_X + j].fractal = f;
			pthread_create(&(ft[i * FRACTAL_THREADS_X + j].thread), NULL,
					&update_image_part, &ft[i * FRACTAL_THREADS_X + j]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < FRACTAL_THREADS_X * FRACTAL_THREADS_Y)
		pthread_join(ft[i++].thread, NULL);
	update_window(f->window);
}