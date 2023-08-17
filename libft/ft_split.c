/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:12:14 by cqin              #+#    #+#             */
/*   Updated: 2022/12/01 11:16:48 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_word(char *s, char c)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nb_word++;
		i++;
	}
	return (nb_word);
}

static int	word_len(char *s, char c, int i)
{
	int	len_word;

	len_word = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len_word++;
	}
	return (len_word);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_split_split(char **d, char *s, char c)
{
	int	k;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (((char *)s)[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (((char *)s)[i])
		{
			d[j] = malloc(sizeof(char) * ((word_len((char *)s, c, i)) + 1));
			if (!d[j])
				return (ft_free(d));
			while (s[i] && (s[i] != c))
				d[j][k++] = s[i++];
			d[j][k] = '\0';
			j++;
		}
	}
	d[j] = NULL;
	return (d);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = count_word((char *)s, c);
	d = (char **)malloc(sizeof(char *) * (nb_word + 1));
	if (!d)
		return (NULL);
	ft_split_split(d, (char *)s, c);
	return (d);
}

/*int main(void)
{
	printf("%s\n",(char *)ft_split("",'z'));
}*/
