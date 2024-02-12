/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migenc <migenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:02:29 by migenc            #+#    #+#             */
/*   Updated: 2024/02/12 16:45:43 by migenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	send_signal(int pid, int c)
{
	int	bit;

	bit = 6;
	while (bit != -1)
	{
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(77);
		bit--;
	}
	return (0);
}

int	main(int argc, char	**argv)
{
	if (argc != 3)
	{
		ft_printf("exited with: %s\n", ERR_ARGUMENT);
		exit(1);
	}
	while (*argv[2])
		send_signal(ft_atoi(argv[1]), *argv[2]++);
	return (0);
}
