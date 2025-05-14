# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 11:52:01 by lenakach          #+#    #+#              #
#    Updated: 2025/05/14 18:24:39 by lenakach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la librairie
NAME = libftprintf.a
INC= .
#Compilateur et flags
CC = cc
FLAGS = -Wall -Wextra -Werror -I$(INC)

#Fichiers sources et objets
SRCS = ft_print_char.c ft_print_int.c \
		ft_print_string.c ft_printf.c ft_print_p.c ft_print_unsigned.c \
		ft_print_hexa.c ft_print_hexamaj.c ft_printf.c
OBJS = $(SRCS:.c=.o)

#Commandes
RM = rm -f
AR = ar rcs

#Creation des .o a partir des .c 
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

#Regle principale
all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Nettoyage des .o
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

# Suppression de tous les fichiers générés
fclean: clean
	$(RM) $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re test