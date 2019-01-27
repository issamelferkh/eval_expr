/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:32:10 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 14:32:13 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <stdlib.h>
# include <unistd.h>

int		eval_expr(char *str); // eval_expr.c

char	*ft_calculate_p(char *str); // ft_calculate.c

char	*ft_calculate_as(char *str); // ft_calculate.c

char	*ft_calculate_mnd(char *str); // ft_calculate.c

void	itoa_isnegative(int *n, int *negative); // ft_convert.c

char	*ft_itoa(int n); // ft_convert.c

int		ft_atoi(char *str); // ft_convert.c

void	ft_free(char *str); // ft_free.c

int		call_eval_expr(char *str, int i_first, int i_last); // ft_free.c

void	ft_putstr(char *str); // ft_string.c

char	*ft_strnew(char *str, int i_first, int i_last); // ft_string.c

char	*ft_str_replace(char *str, int i_first, int i_last, int nb); // ft_string.c

char	*ft_strtrim(char *str); // ft_string.c

int		ft_str_find(char *str, char *tofind); // ft_string.c

int		ft_strlen(char *str); // ft_string2.c

char	*ft_strcat(char *dest, char *src); // ft_string2.c

char	*ft_strcpy(char *dest, char *src); // ft_string2.c

char	*ft_strncpy(char *dest, char *src, unsigned int n); // ft_string2.c

char	*ft_strdup(char *src); // ft_string2.c

int		*ft_find_index(char *str, int *idx);
