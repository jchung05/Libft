/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:39:59 by akassil           #+#    #+#             */
/*   Updated: 2017/07/04 15:14:58 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
		return (0);
	n--;
	while (*s1 == *s2 && (*s1 != '\0') && (*s2 != '\0') && n != 0)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
