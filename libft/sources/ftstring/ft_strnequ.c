/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 16:10:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

int						ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t				i;

	i = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
			i++;
		if (i == n)
			return ((s1[i - 1] - s2[i - 1] == 0 ? (1) : (0)));
		else
			return ((s1[i] - s2[i]) == 0 ? (1) : (0));
	}
	return (0);
}
