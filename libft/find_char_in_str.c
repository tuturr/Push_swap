/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_char_in_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:13:09 by arlaine           #+#    #+#             */
/*   Updated: 2019/06/17 15:13:10 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_char_in_str(char c, char *str)
{
	int	i;

	i = 0;
	if (c && str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (1);
			++i;
		}
	}
	return (0);
}
