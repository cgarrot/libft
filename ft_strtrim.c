/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 09:01:10 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 09:25:55 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*d;
	unsigned int	i;
	unsigned int	j;
	unsigned int	tmp;

	i = 0;
	j = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = ft_strlen(s);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(d = (char*)malloc(sizeof(char) * j - i)))
		return (0);
	tmp = j;
	j = 0;
	while (i < tmp)
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
