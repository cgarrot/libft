/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 06:27:31 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 11:43:39 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		len(int n)
{
	int len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

static int		neg(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static int		one(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int		i;
	int		tmp2;
	char	*str;

	if (n == -2147483648)
	{
		if (!(str = (char*)malloc(sizeof(char) * 12)))
			return (0);
		str = ft_strcpy(str, "-2147483648");
		return (str);
	}
	tmp2 = one(n);
	n = neg(n);
	i = len(n);
	if (!(str = (char*)malloc(sizeof(char) * i + tmp2)))
		return (0);
	tmp2 == 1 ? str[0] = '-' : 0;
	while (i--)
	{
		str[i + tmp2] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
