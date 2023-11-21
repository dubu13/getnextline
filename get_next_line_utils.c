/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhasan <dhasan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:03:24 by dhasan            #+#    #+#             */
/*   Updated: 2023/11/21 23:01:29 by dhasan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_line_length(char *save)
{
	int	len;

	len = 0;
	while (save[len] && save[len] != '\n')
		len++;
	return (len);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&(str[i]));
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *save, char *buf)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (save == NULL)
	{
		save = (char *)malloc(sizeof(char) * (1));
		save[0] = '\0';
	}
	if (!buf)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(save) + ft_strlen(buf)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (save)
		while (save[++i] != '\0')
			str[i] = save[i];
	while (buf[j] != '\0')
		str[i++] = buf[j++];
	str[ft_strlen(save) + ft_strlen(buf)] = '\0';
	free(save);
	return (str);
}
