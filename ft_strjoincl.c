/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:15:09 by rmallawa          #+#    #+#             */
/*   Updated: 2022/10/03 14:27:46 by rmallawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include "libft.h"

char	*ft_strjoincl(char *s1, char *s2, int free_both)
{
	char	*new;

	if (!(new = ft_strjoin(s1, s2)))
		return (NULL);
	free(s1);
	s1 = NULL;
	if (free_both)
	{
		free(s2);
		s2 = NULL;
	}
	return (new);
}
