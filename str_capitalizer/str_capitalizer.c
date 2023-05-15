/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:42:13 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/12 14:53:44 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*minimalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	capitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i - 1] == '	'))
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	char	*final;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		while (i < argc)
		{
			final = minimalize(argv[i]);
			capitalize(final);
			i++;
		}
	}
	return(0);
}
