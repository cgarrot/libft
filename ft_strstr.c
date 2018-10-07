/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 08:13:46 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 08:35:11 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*h;

	h = haystack;
	if (*needle == 0)
		return ((char *)h);
	while ((h = ft_strchr(h, *needle)) != 0)
		if (ft_strncmp(h, needle, ft_strlen(needle)) == 0)
			return ((char *)h);
	return (NULL);
}
