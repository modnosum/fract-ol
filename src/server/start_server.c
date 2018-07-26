/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_server.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 19:41:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 20:07:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <server.h>
#include <mlx.h>

void					start_server(void)
{
	mlx_loop(get_server());
}