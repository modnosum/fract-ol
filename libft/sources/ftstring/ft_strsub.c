/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:51:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

char					*ft_strsub(const char *s, unsigned int start,
size_t len)
{
	char				*str;
	int					i;

	str = ft_strnew(len);
	if (str && s)
	{
		i = 0;
		while (len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
	}
	return (str);
}
