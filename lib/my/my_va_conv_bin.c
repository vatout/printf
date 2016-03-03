/*
** my_va_conv_bin.c for my_va_conv_bin.c in /home/vatout_a/rendu/PSU_2015_my_printf/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:15:09 2015 Vatoutine Artem
** Last update Mon Nov 16 15:14:41 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"

void	my_put_oct(unsigned int nb)
{
  int	a;
  char	*c;

  c = "01234567";
  if (nb > 0)
    {
      a = nb % 8;
      nb = nb / 8;
      my_put_oct(nb);
      my_putchar(c[a]);
    }
}

int	my_va_conv_oct(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_oct(nb);
  return (0);
}

void	my_put_bin(unsigned int nb)
{
  int	a;
  char	*c;

  c = "01";
  if (nb > 0)
    {
      a = nb % 2;
      nb = nb / 2;
      my_put_bin(nb);
      my_putchar(c[a]);
    }
}

int	my_va_conv_bin(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_bin(nb);
  return (0);
}
