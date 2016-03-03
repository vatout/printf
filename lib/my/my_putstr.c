/*
** my_putstr.c for my_putstr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:51:28 2015 Vatoutine Artem
** Last update Mon Nov 16 11:35:11 2015 Vatoutine Artem
*/

#include "../../include/my.h"

int	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
  return (0);
}
