/*
** my_printf.c for my_printf.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:49:54 2015 Vatoutine Artem
** Last update Mon Nov 16 15:22:22 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"

int	check_lauch(char u, char *var, va_list ap, int (*tab[])(va_list))
{
  int	y;

  y = 0;
  while (y < 12)
    {
      if (var[y] == u)
	tab[y](ap);
      y++;
    }
  return (0);
}

int	check_src(int (*tab[])(va_list), char *var, const char *src, va_list ap)
{
  int	z;

  z = 0;
  while (src[z] != '\0')
    {
      if (src[z] == '%' && src[z + 1] != '\0')
	{
	  z++;
	  if (src[z] == '%')
	    my_putchar('%');
	  else
	    check_lauch(src[z], var, ap, tab);
	}
      else
	my_putchar(src[z]);
      z++;
    }
  return (0);
}

int	my_fill_vartab(char *var)
{
  var[0] = 'd';
  var[1] = 'i';
  var[2] = 'c';
  var[3] = 's';
  var[4] = 'o';
  var[5] = 'x';
  var[6] = 'X';
  var[7] = 'u';
  var[8] = 'p';
  var[9] = 'b';
  var[10] = 'S';
  return (0);
}

int	my_fill_funktab(int (*tab[])(va_list))
{
  tab[0] = my_va_conv_nbr;
  tab[1] = my_va_conv_nbr;
  tab[2] = my_va_conv_putchar;
  tab[3] = my_va_conv_putstr;
  tab[4] = my_va_conv_oct;
  tab[5] = my_va_conv_hexmin;
  tab[6] = my_va_conv_hexmaj;
  tab[7] = my_va_conv_ld;
  tab[8] = my_va_conv_adr;
  tab[9] = my_va_conv_bin;
  tab[10] = my_va_conv_soct;
  return (0);
}

int	my_printf(const char *src, ...)
{
  int		(*tab[11])(va_list);
  char		var[11];
  va_list	ap;

  va_start(ap, src);
  my_fill_funktab(tab);
  my_fill_vartab(var);
  check_src(tab, var, src, ap);
  va_end(ap);
  return (0);
}
