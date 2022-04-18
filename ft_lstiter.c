/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:00:50 by ebennace          #+#    #+#             */
/*   Updated: 2021/10/28 15:24:04 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!(lst) || !(f))
		return ;
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}

/* Le but de cette fonctions est d'appliquer a chaque liste de la liste
 * chainer la fonctions (f)
 *
 * on verifie si la liste et la fonction de sont pas vide
 * tant que lst n'est pas egale a NULL
 * on applique la fonction f aux contenue de la liste
 * on passe a la liste suivante
 */
