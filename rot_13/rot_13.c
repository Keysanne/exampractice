/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:56:26 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/12 14:20:39 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	transform(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a';
			str[i] += 13 + 'a' - 26;
			if (str[i] < 'a')
				str[i] += 26;
			write(1, &str[i], 1);	
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 'A';
			str[i] += 13 + 'A' - 26;
			if (str[i] < 'A')
				str[i] += 26;
			write(1, &str[i], 1);	
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		transform(argv[1]);
	return (0);
}
