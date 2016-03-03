/*
** my_va_conv_putstr.c for my_va_conv_putstr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:04:44 2015 Vatoutine Artem
** Last update Mon Nov 16 14:30:19 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"
#include <unistd.h>

int	my_va_conv_soct(va_list ap)
{
  unsigned char	*src;
  int		z;
  unsigned int	y;

  z = 0;
  src = va_arg(ap, unsigned char *);
  while (src[z] != '\0')
    {
      if (src[z] < 32 || src[z] >= 127)
	{
	  my_putchar(92);
	  if (src[z] < 8)
	    my_putstr("00");
	  if (src[z] < 32 && src[z] >= 8 && src[z] < 64)
	    my_putchar('0');
	  y = src[z];
	  my_put_oct(y);
	}
      else
	my_putchar(src[z]);
      z++;
    }
  return (0);
}

int	my_va_conv_putchar(va_list ap)
{
  char	n;
  n = va_arg(ap, int);
  write(1, &n, 1);
  return (0);
}

int	my_va_conv_putstr(va_list ap)
{
  char	*src;
  int	z;

  z = 0;
  src = va_arg(ap, char *);
  while (src[z] != '\0')
    {
      my_putchar(src[z]);
      z++;
    }
  return (0);
}
