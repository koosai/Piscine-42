/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 06:05:55 by alaamimi          #+#    #+#             */
/*   Updated: 2020/11/15 06:17:15 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char ltr;

	ltr = 96;
	while(ltr++ <= 121)
	{
		write(1, &ltr, 1);
	}
}
