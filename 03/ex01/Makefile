# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 22:04:21 by johokyoun         #+#    #+#              #
#    Updated: 2022/01/23 18:26:43 by johokyoun        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR = ./objs
SRCS =	./main.cpp	\
		./ClapTrap.cpp	\
		./ScavTrap.cpp

OBJS = $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS_DIR) :
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $^

clean :
	@$(RM) -r $(OBJS_DIR)

fclean : clean
	@$(RM) $(NAME)

re : fclean all