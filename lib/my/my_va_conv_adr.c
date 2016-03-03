/*
** my_va_conv_adr.c for my_va_conv_adr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:03:06 2015 Vatoutine Artem
** Last update Mon Nov 16 13:21:45 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"

void	my_put_adr(long long nb)
{
  int	a;
  char	*c;

  c = "0123456789abcdef";
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb > 0)
    {
      a = nb % 16;
      nb = nb / 16;
      my_put_adr(nb);
      my_putchar(c[a]);
    }
}

int	my_va_conv_adr(va_list ap)
{
  long long	nb;

  nb = va_arg(ap, long long);
  if (nb == 0)
    my_putstr("(nil)");
  else
    {
      my_putstr("0x");
      my_put_adr(nb);
    }
  return (0);
}
