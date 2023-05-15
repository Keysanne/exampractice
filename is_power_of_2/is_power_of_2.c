/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:17:54 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/11 14:50:08 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	i = 1;
	if (n > 2147483647)
		return (0);
	while (i < n)
		i *= 2;
	if (i == n)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	printf("%d", is_power_of_2(-2));
	return (0);
}*/
