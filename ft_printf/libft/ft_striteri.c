/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgricour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 00:31:51 by kgricour          #+#    #+#             */
/*   Updated: 2017/11/17 14:46:07 by kgricour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	if (s == NULL || (*f) == NULL)
		return ;
	i = 0;
	while (*s)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
