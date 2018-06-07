/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:30:53 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 14:41:33 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int res;

	res = 0;
	while (*tab != 0)
	{
		res = f(*tab);
		tab++;
		if (res == 1)
			return (1);
	}
	return (0);
}
