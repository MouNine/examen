/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:59:26 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:13:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_tab(int *tab, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (tab[(int)s[i]] == 0)
		{
			write(1, &s[i], 1);
			tab[(int)s[i]] = 1;
		}	
		i++;
	}
}

static void	ft_union(char *s1, char *s2)
{
	int	tab[256] = {0};

	print_tab(tab, s1);
	print_tab(tab, s2);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
