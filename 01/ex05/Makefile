# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johokyoun <johokyoun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 22:39:42 by johokyoun         #+#    #+#              #
#    Updated: 2022/01/09 22:40:25 by johokyoun        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR = ./objs
SRCS =	./main.cpp	\
		./Karen.cpp


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