/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:08:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# define IN_IMAGE(X,Y,W,H) (X >= 0 && X < W && Y >= 0 && Y < H)
# define RGB_COLOR(A,R,G,B) ((A << 24) | (R << 16) | (G << 8) | (B))

/*
** X11 Server Link
** Image pointer
** Image data pointer
** Image bit per pixel
** Length of line in image
** Image endian
** Local
** Width
** Height
*/

#include <vector.h>

typedef struct			s_image
{
	void				*server;
	void				*ip;
	char				*id;
	int					bp;
	int					sl;
	int					en;
	int					le;
	int					width;
	int					height;
}						t_image;

t_image					*get_image(int width, int height);
void					delete_image(t_image **ip);

void					draw_line(t_image *i, t_vec3i *p1, t_vec3i *p2);
void					put_pixel(t_image *i, t_vec3i *p);
unsigned int			map_color(unsigned int c1, unsigned int c2,
									float ratio);

#endif