/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:39:15 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/09 11:37:59 by tbatteux         ###   ########.fr       */
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

char	*transform(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '	')
		{
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i - 1] -= 32;
		}
		i++;
	}
	if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
		str[i - 1] -= 32;
	return (str);
}

int	main(int argc, char **argv)
{
	char	*final;
	int	i;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while(argv[i])
		{
			final = minimalize(argv[i]);
			ft_putstr(transform(final));
			i++;
		}
	}
	return (0);
}
