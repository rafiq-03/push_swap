# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 23:16:38 by rmarzouk          #+#    #+#              #
#    Updated: 2024/06/10 11:44:31 by rmarzouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
BNAME= checker

### FLAGS

CC=gcc
CFLAGS= -Wall -Wextra -Werror

### LIBFT

LIBFT = libft.a
LIBFT_DIR = libft

### UTILS

UTILS_DIR = Mandatory/
UTILS_S = $(addprefix $(UTILS_DIR), push_swap.c 	\
									init_stack_a.c	\
									make_stack_a.c	\
									check_num.c		\
									ft_swap.c		\
									ft_rotate.c		\
									ft_rrotate.c	\
									ft_push.c		\
									ft_sort.c		\
									min_max.c		\
									)

UTILS_O = $(UTILS_S:.c=.o)

B_UTILS_DIR = Bonus/
B_UTILS_S = $(addprefix $(B_UTILS_DIR),gnl/get_next_line.c		\
									gnl/get_next_line_utils.c	\
									checker_bonus.c				\
									init_stack_a_bonus.c		\
									make_stack_a_bonus.c		\
									check_num_bonus.c			\
									ft_actions_bonus.c			\
									)

B_UTILS_O = $(B_UTILS_S:.c=.o)

#_________________________________________________________

all: $(NAME) 

$(NAME): $(UTILS_O)
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(UTILS_O) -L$(LIBFT_DIR) -lft -o $(NAME)

bonus:$(BNAME)

$(BNAME): $(B_UTILS_O)
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS)  $(B_UTILS_O)  -L$(LIBFT_DIR) -lft -o $(BNAME)	
#_________________________________________________________

%.o:%.c Mandatory/push_swap.h Bonus/checker_bonus.h
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "Cleanin object files ..."
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(UTILS_O)
	@rm -f $(B_UTILS_O)
	@echo "DONE .."
	

fclean: clean
	@rm -f $(NAME)
	@rm -f $(BNAME)
re: fclean all

.PHONY: clean fclean re all
