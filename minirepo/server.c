/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:02:44 by migenc            #+#    #+#             */
/*   Updated: 2024/02/12 16:50:26 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int signal)
{
	static char	c;
	static int	check_b = 0;

	if (signal == SIGUSR1)
		c = c | 1;
	check_b++;
	if (check_b == 7)
	{
		ft_printf("%c", c);
		c = 0;
		check_b = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	ft_printf("procces_id -> %d", getpid());
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (1)
		pause();
}
