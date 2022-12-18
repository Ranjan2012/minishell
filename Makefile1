# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmallawa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 14:18:46 by rmallawa          #+#    #+#              #
#    Updated: 2022/09/20 14:18:57 by rmallawa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a
CFLAGS	= -Wall -Werror -Wextra -Iincludes -c
FILES		= $(shell ls | grep -E ".+\.c")
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	@gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re



