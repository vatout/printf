##
## Makefile for Makefile in /home/vatout_a/rendu/Piscine_C_J10/lib/my
## 
## Made by Vatoutine Artem
## Login   <vatout_a@epitech.net>
## 
## Started on  Fri Oct  9 11:18:37 2015 Vatoutine Artem
## Last update Mon Nov 16 15:16:18 2015 Vatoutine Artem
##

RM	= rm -f

LIBC	= ar rc

LIBR	= ranlib

CP	= cp

NAME	= libmy.a

CFLAGS	= -Wall -Wextra

SRCS	= lib/my/my_printf.c \
	  lib/my/my_va_conv_putstr.c \
	  lib/my/my_va_conv_adr.c \
	  lib/my/my_va_conv_bin.c \
	  lib/my/my_va_conv_hex.c \
	  lib/my/my_va_conv_nbr.c \
	  lib/my/my_putchar.c \
	  lib/my/my_isneg.c \
	  lib/my/my_put_nbr.c \
	  lib/my/my_swap.c \
	  lib/my/my_putstr.c \
	  lib/my/my_strlen.c \
	  lib/my/my_getnbr.c \
	  lib/my/my_strcpy.c \
	  lib/my/my_strncpy.c \
	  lib/my/my_revstr.c \
	  lib/my/my_strcat.c \
	  lib/my/sum_stdarg.c \
	  lib/my/disp_stdarg.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

all:	$(NAME) clean

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
