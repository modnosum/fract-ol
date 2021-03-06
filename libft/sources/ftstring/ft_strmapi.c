/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:51:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

char					*ft_strmapi(const char *str, char (*f)(unsigned int,
char))
{
	char				*mapped_str;
	int					i;

	if (str && f)
		if ((mapped_str = ft_strnew(ft_strlen(str))))
		{
			i = 0;
			while (str[i])
			{
				mapped_str[i] = f(i, str[i]);
				i++;
			}
			return (mapped_str);
		}
	return (NULL);
}
