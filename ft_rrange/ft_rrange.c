/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:05:37 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/12 13:52:39 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int     *ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	j;

	j = end - start + 1;
	i = 0;
	if (end >= start)
	{
		tab = malloc((j + 1) * sizeof(int));
		if (!tab)
			return (NULL);
		while (end >= start)
			tab[i++] = end--;
	}
	else if (end < start)
	{
		tab = malloc((-j + 1) * sizeof(int));
		if (!tab)
			return (NULL);
		while (end <= start)
			tab[i++] = end ++;
	}
	return (tab);
}
/*
int	main()
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_rrange(1, 3);
	while (i < 3)
		printf("%d\n", tab[i++]);
	printf("-----------------\n");
	i = 0;
	tab = ft_rrange(-1, 2);
	while (i < 4)
		printf("%d\n", tab[i++]);
	printf("-----------------\n");
	i = 0;
	tab = ft_rrange(0, 0);
	while (i < 1)
		printf("%d\n", tab[i++]);
	printf("-----------------\n");
	i = 0;
	tab = ft_rrange(0, -3);
	while (i < 4)
		printf("%d\n", tab[i++]);
	return (0);
}*/
