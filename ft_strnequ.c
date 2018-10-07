/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 08:17:41 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 08:34:53 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while ((s1[i] && s2[i]) && i < n)
	{
		if (((ft_isalpha(s1[i]) || s1[i] == ' ')
					&& (ft_isalpha(s2[i]) || s2[i] == ' ')))
			j++;
		i++;
	}
	if (i == j)
		return (1);
	return (0);
}
