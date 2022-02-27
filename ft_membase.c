/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjuras <fjuras@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:34:32 by fjuras            #+#    #+#             */
/*   Updated: 2022/02/27 19:16:22 by fjuras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/**
 * @brief Set n bytes in memory with c
 * 
 * @param b pointer to memory start
 * @param c byte to set
 * @param n number of bytes
 * @return void* b
 */
void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*mem;
	size_t			i;

	uc = (unsigned char) c;
	mem = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		mem[i] = uc;
		i += 1;
	}
	return (b);
}
