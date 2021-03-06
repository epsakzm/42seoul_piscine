/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:21:51 by hyeopark          #+#    #+#             */
/*   Updated: 2020/11/04 22:32:05 by hyeopark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_foreach(int *tab, int length, void (*f)(int))
{
	int		idx;

	idx = 0;
	while (idx < length)
	{
		f(tab[idx]);
		idx++;
	}
}
