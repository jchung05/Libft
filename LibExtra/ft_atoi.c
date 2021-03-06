/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_me.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassil <akassil@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:14:15 by akassil           #+#    #+#             */
/*   Updated: 2017/07/11 21:35:26 by akassil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*find_end(char *start)
{
	while (*start >= '0' && *start <= '9')
		start++;
	return (--start);
}

int		ft_atoi(char *str)
{
	char	*end;
	char	*start;
	int		multiplier;
	int		nb;

	start = str;
	while (*start > 0 && *start < 33)
		start++;
	if (*start == '-' || *start == '+')
		start++;
	end = find_end(start);
	nb = 0;
	multiplier = 1;
	while (end >= start)
	{
		nb += (*end - '0') * multiplier;
		multiplier *= 10;
		end--;
	}
	if (start != str && *(start - 1) == '-')
		nb *= -1;
	return (nb);
}
