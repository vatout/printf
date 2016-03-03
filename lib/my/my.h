/*
** my.h for my.h in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:26:47 2015 Vatoutine Artem
** Last update Mon Nov 16 15:06:27 2015 Vatoutine Artem
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>

void	my_put_oct(unsigned int nb);
int	str_change(char *str, int n);
int	my_printf(const char *src, ...);
int	my_va_conv_nbr(va_list ap);
int	my_va_conv_soct(va_list ap);
int	my_va_conv_putchar(va_list ap);
int	my_va_conv_putstr(va_list ap);
int	my_va_conv_ld(va_list ap);
int	my_va_conv_lld(va_list ap);
int	my_va_conv_long(va_list ap);
int	my_va_conv_hexmin(va_list ap);
int	my_va_conv_hexmaj(va_list ap);
int	my_va_conv_oct(va_list ap);
int	my_va_conv_bin(va_list ap);
int	my_va_conv_adr(va_list ap);
void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strcat(char *dest, char *src);
int	sum_stdarg(int i, int nb, ...);
int	disp_stdarg(char *s, ...);

#endif /* MY_H_ */
