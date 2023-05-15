/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:14:05 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/09 10:36:17 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

char	*transform(char *str)
{
	char	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = 97;
			str[i] -= j;
			str[i] = 122 - str[i];
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 65;
			str[i] -= j;
			str[i] = 90 - str[i];
		}
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*final;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		final = transform(argv[1]);
		ft_putstr(final);
	}
	return (0);
}
