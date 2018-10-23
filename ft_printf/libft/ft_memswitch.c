/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswitch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abytko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:46:03 by abytko            #+#    #+#             */
/*   Updated: 2018/02/12 19:08:55 by abytko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswitch(void *point1, void *point2, size_t len)
{
	size_t			n;
	unsigned char	*temp;
	int				i;
	size_t			p;
	unsigned char	*tempfree;

	i = 0;
	p = len;
	n = point2 - point1;
	temp = (unsigned char *)malloc(n);
	tempfree = temp;
	while (n--)
	{
		*(temp + i) = *((unsigned char *)point1 + i);
		i++;
	}
	while (len--)
		*((unsigned char *)point1++) = *((unsigned char *)point2++);
	while (i--)
		*((unsigned char *)point1++) = *(temp++);
	free(tempfree);
}
