/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 20:22:57 by hyeopark          #+#    #+#             */
/*   Updated: 2020/10/27 06:30:53 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int idx;

	idx = 2;
	if (nb <= 1)
		return (0);
	while (idx <= nb / idx)
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}