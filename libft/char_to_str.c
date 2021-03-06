/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arlaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:10:15 by arlaine           #+#    #+#             */
/*   Updated: 2019/06/17 15:10:16 by arlaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*char_to_str(char c)
{
	char	*str;

	if (!(str = (char *)malloc(2)))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}
