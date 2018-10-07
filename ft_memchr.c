/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 09:53:43 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 04:38:41 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s1;
	size_t			i;

	s1 = s;
	i = 0;
	while (++i < n)
		if (s1[i] == c)
			return ((char *)&s[i]);
	return (0);
}
