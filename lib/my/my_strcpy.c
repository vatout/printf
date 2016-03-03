/*
** my_strcpy.c for my_strcpy.c in /home/vatout_a/taff/USP/my_printf/testpointeurs/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Fri Nov 13 17:50:39 2015 Vatoutine Artem
** Last update Sun Nov 15 15:21:39 2015 Vatoutine Artem
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
