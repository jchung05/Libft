/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:50:11 by akassil           #+#    #+#             */
/*   Updated: 2017/07/31 14:13:28 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}