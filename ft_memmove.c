/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagarci2 <cagarci2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:10:57 by cagarci2          #+#    #+#             */
/*   Updated: 2023/10/17 11:44:24 by cagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if ((unsigned char *)dst == 0 && (unsigned char *)src == 0)
		return (0);
	ft_memcpy(p_dst, p_src, len);
	return (dst);
}
