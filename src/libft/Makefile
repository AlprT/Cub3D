# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atangil <atangil@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 18:04:50 by atangil           #+#    #+#              #
#    Updated: 2023/07/26 12:02:14 by atangil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
INCLUDES	=   ../include

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

SRC	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memchr.c ft_memcmp.c ft_striteri.c\
ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
ft_strchr.c ft_strlcpy.c ft_strmapi.c\
ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c\
ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c\
ft_strnstr.c ft_strrchr.c ft_strjoin.c\
ft_tolower.c ft_toupper.c ft_strlcat.c

B_SRC = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ	=	$(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

bonus:	$(OBJ)	$(B_OBJ)
			ar rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all bonus clean fclean re
