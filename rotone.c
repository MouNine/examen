/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:37:31 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:08:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
			ft_putchar(*s + 1);
		else if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		s++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
