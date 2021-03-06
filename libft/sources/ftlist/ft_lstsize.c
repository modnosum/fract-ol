/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 11:59:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:45:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlist.h>

size_t					ft_lstsize(t_list *lst)
{
	size_t				i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
