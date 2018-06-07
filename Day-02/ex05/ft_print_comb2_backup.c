/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:21:32 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 23:21:25 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int		first;
	char	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar((char)(first / 10) + 48);
			ft_putchar((char)(first % 10) + 48);
			ft_putchar(' ');
			ft_putchar((char)(second / 10) + 48);
			ft_putchar((char)(second % 10) + 48);
			if (first < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}

int		main(void)
{
	ft_print_comb2();
}
