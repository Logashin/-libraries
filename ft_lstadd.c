/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmann <tmann@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 18:21:17 by tmann             #+#    #+#             */
/*   Updated: 2018/12/10 13:55:22 by tmann            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	if (alst == NULL)
		new->next = NULL;
	if (alst != NULL)
		new->next = (*alst);
	(*alst) = new;
}
