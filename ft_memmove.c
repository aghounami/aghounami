/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:56:52 by aghounam          #+#    #+#             */
/*   Updated: 2023/11/16 10:44:50 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*new_src;
	unsigned char	*new_dest;
	size_t			i;

	new_dest = (unsigned char *)dest;
	new_src = (unsigned char *)src;
	if (new_dest == new_src)
		return (dest); 
	if (new_dest > new_src)
	{
		while (n > 0)
		{
			n--;
			new_dest[n] = new_src[n];
		}
	}
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}
