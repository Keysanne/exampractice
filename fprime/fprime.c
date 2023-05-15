/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:57:04 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/12 15:25:35 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int n)
{
	int	i;
	int	j;

	i = 2;
	j = 0;
	if (n < 0)
	{
		printf("\n");
		return ;
	}
	while (n != 1 && i < 46340)
	{
		while (is_prime(i) == 0)
			i++;
		while (n % i == 0)
		{
			if (n / i == 1)
			{
				printf("%d\n", i);
				j++;
			}
			else
				printf("%d*", i);
			n /= i;
		}
		i++;
	}
	if (j == 0)
		printf("%d\n", n);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		printf("\n");
	else
	{
		i = atoi(argv[1]);
		fprime(i);
	}
	return (0);
}
