/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 16:03:59 by arlaine           #+#    #+#             */
/*   Updated: 2019/06/17 16:03:59 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cpy;

	cpy = (char *)s;
	while (n > 0)
	{
		*cpy++ = (unsigned char)c;
		n--;
	}
	return (s);
}
