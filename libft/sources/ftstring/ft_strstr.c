/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:21:18 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 19:02:49 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>
#include <ftstdlib.h>

char					*ft_strstr(const char *haystack, const char *needle)
{
	char				*p;
	size_t				len;
	int					i;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	p = (char*)haystack;
	i = 0;
	while (p[i] != 0)
	{
		if (ft_memcmp((p + i), needle, len) == 0)
			return (p + i);
		i++;
	}
	return (NULL);
}
