/*
** my_va_conv_hex.c for my_va_conv_hex.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:03:53 2015 Vatoutine Artem
** Last update Mon Nov 16 15:11:15 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"

void	my_put_hexmin(unsigned int nb)
{
  int	a;
  char	*c;

  c = "0123456789abcdef";
  if (nb > 0)
    {
      a = nb % 16;
      nb = nb / 16;
      my_put_hexmin(nb);
      my_putchar(c[a]);
    }
}

int	my_va_conv_hexmin(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_hexmin(nb);
  return (0);
}

void	my_put_hexmaj(unsigned int nb)
{
  int	a;
  char	*c;

  c = "0123456789ABCDEF";
  if (nb > 0)
    {
      a = nb % 16;
      nb = nb / 16;
      my_put_hexmaj(nb);
      my_putchar(c[a]);
    }
}

int	my_va_conv_hexmaj(va_list ap)
{
  unsigned int	nb;

  nb = va_arg(ap, unsigned int);
  my_put_hexmaj(nb);
  return (0);
}
