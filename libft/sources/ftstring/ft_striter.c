/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:43:43 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

void					ft_striter(char *str, void (*f)(char *))
{
	if (str && f)
		while (*str)
			f(str++);
}
