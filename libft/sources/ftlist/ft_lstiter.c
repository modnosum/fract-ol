/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 04:42:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:45:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftlist.h>

void					ft_lstiter(t_list *lst, void (*f)(t_list*))
{
	if (f)
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
}