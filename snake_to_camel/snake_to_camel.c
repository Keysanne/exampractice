/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:38:44 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/11 17:04:29 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

void	afficher(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
			i++;
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	char	*final;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		final = capitalize(argv[1]);
		afficher(final);
		write(1, "\n", 1);
	}
	return (0);
}
