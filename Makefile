# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/18 12:35:57 by cruiz-de          #+#    #+#              #
#    Updated: 2021/03/15 19:13:42 by cruiz-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_strdup2.s
OBJS		=	$(SRCS:.s=.o)

NA			=	nasm
NA_FLAGS	=	-f macho64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a
TEST		=	test

%.o:			%.s
				$(NA) $(NA_FLAGS) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME) $(BONUS) $(TEST)

re:				fclean $(NAME)

test:			$(NAME)
				gcc -fsanitize=address -g $(FLAGS) -L. -lasm -o $(TEST) main.c
				./$(TEST) < Makefile

bonus:			$(OBJS)
				ar rcs $(NAME) $(OBJS)

.PHONY:			clean fclean re test bonus test_bonus
