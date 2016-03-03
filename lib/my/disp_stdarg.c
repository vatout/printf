/*
** disp_stdarg.c for disp_stdarg.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:25:20 2015 Vatoutine Artem
** Last update Mon Nov 16 14:07:21 2015 Vatoutine Artem
*/

#include <stdarg.h>
#include "../../include/my.h"

int	disp_stdarg(char *s, ...)
{
  va_list	ap;
  int	z;

  z = 0;
  va_start(ap, s);
  while (s[z] != '\0')
    {
      if (s[z] == 'c')
	my_putchar(va_arg(ap, int));
      if (s[z] == 'i')
	my_put_nbr(va_arg(ap, int));
      if (s[z] == 's')
	my_putstr(va_arg(ap, char *));
      my_putchar('\n');
      z ++;
    }
  va_end(ap);
  return (0);
}
