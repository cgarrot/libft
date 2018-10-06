/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 09:22:43 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 09:50:30 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	char *restrict			d;
	const char *restrict	s;
	unsigned int			i;

	d = dst;
	s = src;
	i = 0;
	while (i <= n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dst);
		i++;
	}
	return (0);
}
