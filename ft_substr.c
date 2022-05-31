/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afrolova <afrolova@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 15:31:16 by afrolova          #+#    #+#             */
/*   Updated: 2022/05/20 12:29:52 by afrolova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mall;
	size_t	count;
	size_t	len_src;

	len_src = ft_strlen(s);
	count = 0;
	if (len_src < start)
		mall = (char *)malloc(sizeof(char) * 1);
	else if (len_src - start < len)
		mall = malloc(sizeof(char) * (len_src - start + 1));
	else
		mall = (char *)malloc(sizeof(char) * (len + 1));
	if (!mall)
		return (NULL);
	while (start + count < len_src && count < len)
	{
		mall[count] = s[start + count];
		count++;
	}
	mall[count] = '\0';
	return (mall);
}
