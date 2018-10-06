/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 06:43:40 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 08:25:49 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((ft_isascii(s[i]) && s[i] != c) && (s[i + 1] == c))
			k++;
		i++;
	}
	if (!(tab = malloc(sizeof(char) * k)))
		return (0);
	i = 0;
	k = 0;
	l = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
		{
			l++;
			i++;
		}
		while (((((ft_isascii(s[i]) && s[i]) != c) && s[i + 1] == c) != '\0') && i != 0)
		{
			tab[k][j] = s[l];
			l++;
			j++;
		}
		j = 0;
		while (((ft_isascii(s[i]) && s[i + 1]) != c) != '\0')
		{
			j++;
			i++;
		}
		if (!(tab[k] = (char*)malloc(sizeof(char) * j)))
			return (0);
		tab[k][j] = '\0';
		k++;
	}
	return (tab);
}
