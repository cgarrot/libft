/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 06:27:31 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 07:03:27 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	int		tmp2;
	char	*str;

	len = 1;
	tmp = n;
	tmp2 = 0;
	if (n < 0)
	{
		n = -n;
		tmp2++;
	}
	while (tmp /= 10)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * len + tmp2)))
		return (0);
	if (tmp2 == 1)
		str[0] = '-';
	while (len--)
	{
		str[len + tmp2] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
