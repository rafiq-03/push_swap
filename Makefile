# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 23:16:38 by rmarzouk          #+#    #+#              #
#    Updated: 2024/05/01 18:16:58 by rmarzouk         ###   ########.fr        #
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
UTILS_S = $(addprefix $(UTILS_DIR), init_stack_a.c	\
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
									init_stack_a_bonus.c		\
									make_stack_a_bonus.c		\
									check_num_bonus.c			\
									ft_actions_bonus.c			\
									)

B_UTILS_O = $(B_UTILS_S:.c=.o)

#_________________________________________________________

all: $(NAME) 

$(NAME): mandatory/$(NAME).c $(UTILS_O) mandatory/push_swap.h
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(LIBFT_DIR)/$(LIBFT) $(UTILS_O) mandatory/$(NAME).c -o $(NAME)

bonus:$(BNAME)

$(BNAME):Bonus/$(BNAME)_bonus.c $(B_UTILS_O) Bonus/checker_bonus.h
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $(LIBFT_DIR)/$(LIBFT) $(B_UTILS_O) Bonus/$(BNAME)_bonus.c -o $(BNAME)	
#_________________________________________________________

%.o:%.c
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
