/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmushta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 13:23:35 by kmushta           #+#    #+#             */
/*   Updated: 2017/11/05 13:23:36 by kmushta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char *s;
	char *f;
	char tmp;

	f = str;
	while (*f)
		f++;
	f--;
	s = str;
	while (s < f)
	{
		tmp = *s;
		*s = *f;
		*f = tmp;
		s++;
		f--;
	}
	return (str);
}
