# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ninieddu <ninieddu@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 14:33:30 by ninieddu          #+#    #+#              #
#    Updated: 2021/04/13 16:26:41 by ninieddu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC		=	gcc -Wall -Wextra -Werror

NAME	=	libft.a

SRCS	=	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strcmp.c\
			ft_strdel.c\

# BNS		=	ft_lstnew_bonus.c\
# 			ft_lstadd_back_bonus.c\
# 			ft_lstadd_front_bonus.c\
# 			ft_lstlast_bonus.c\
# 			ft_lstsize_bonus.c\
# 			ft_lstclear_bonus.c\
# 			ft_lstdelone_bonus.c\
# 			ft_lstiter_bonus.c\
# 			ft_lstmap_bonus.c\

OPATH	=	objs/

OBJS	=	$(SRCS:%.c=$(OPATH)%.o)

all: $(NAME)

$(OPATH)%.o	:	%.c
				$(shell mkdir -p objs)
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# bonus: $(OBJ) $(OBJ2)
# 	ar rc $(NAME) $(OBJ) $(OBJ2)

clean:
	rm -rf $(OBJS) $(OPATH)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
