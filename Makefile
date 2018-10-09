# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 12:57:11 by cgarrot      #+#   ##    ##    #+#        #
#    Updated: 2018/10/09 01:54:42 by cgarrot     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INC = libft.h

#------------------------------------FILE--------------------------------------#

FILES = ft_atoi\
ft_bzero\
ft_isalnum\
ft_isalpha\
ft_isascii\
ft_isdigit\
ft_isprint\
ft_itoa\
ft_memalloc\
ft_memccpy\
ft_memchr\
ft_memcmp\
ft_memcpy\
ft_memdel\
ft_memmove\
ft_memset\
ft_putchar\
ft_putchar_fd\
ft_putendl\
ft_putendl_fd\
ft_putnbr\
ft_putnbr_fd\
ft_putstr\
ft_putstr_fd\
ft_strcat\
ft_strchr\
ft_strclr\
ft_strcmp\
ft_strcpy\
ft_strdel\
ft_strdup\
ft_strequ\
ft_striter\
ft_striteri\
ft_strjoin\
ft_strlcat\
ft_strlen\
ft_strmap\
ft_strmapi\
ft_strncat\
ft_strncmp\
ft_strncpy\
ft_strnequ\
ft_strnew\
ft_strnstr\
ft_strrchr\
ft_strsplit\
ft_strstr\
ft_strsub\
ft_strtrim\
ft_tolower\
ft_toupper\

#----------------------------------SOURCE--------------------------------------#

SRC = $(addsuffix .c , $(FILES))

#----------------------------------OBJECT--------------------------------------#

OBJ = $(addsuffix .o , $(FILES))

#------------------------------------------------------------------------------#

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRC)  -I $(INC)
	@ar rcs $(NAME) $(OBJ)


clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME) 

re: fclean all
