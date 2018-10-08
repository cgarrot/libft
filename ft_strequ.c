/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 08:08:45 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 23:27:55 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	while (s1[i] && s2[i])
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
