# Regular source files
SRC = \
    libft/atoi.c \
    libft/splite.c \
    libft/ft_strrchr.c \
    ft_parcing/valid_argument.c \
    sorting/array.c \
    sorting/free_stack.c \
    sorting/max_min_stack.c \
    sorting/sort_2345.c \
    sorting/sort_stack.c \
    sorting/stack.c \
    operations/stack_operations.c \
    operations/stack_operations_1.c \
    operations/stack_operations_2.c \
	main.c

SRC_BONUS = \
    bonus/bonus_util.c \
    bonus/get_next_line/get_next_line.c \
    bonus/get_next_line/get_next_line_utils.c \
    bonus/operations/stack_operations.c \
    bonus/operations/stack_operations_1.c \
    bonus/operations/stack_operations_2.c \
	libft/atoi.c \
    libft/splite.c \
    libft/ft_strrchr.c \
    ft_parcing/valid_argument.c \
    sorting/array.c \
    sorting/free_stack.c \
    sorting/max_min_stack.c \
    sorting/sort_2345.c \
    sorting/sort_stack.c \
    sorting/stack.c \
    operations/stack_operations.c \
    operations/stack_operations_1.c \
    operations/stack_operations_2.c \
	bonus/main_bonus.c

OBG = $(SRC:.c=.o)
OBG_BONUS = $(SRC_BONUS:.c=.o)

NAME = push_swap
NAME_BONUS = checker


all : $(NAME)

$(NAME) : $(OBG)
	cc -Wall -Wextra -Werror $(OBG) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS) : $(OBG_BONUS)
	cc -Wall -Wextra -Werror $(OBG_BONUS) -o $(NAME_BONUS)

%.o:%.c
	cc -Wall -Wextra -Werror -c $< -o $@
	
clean :
	rm -f $(OBG) $(OBG_BONUS)

fclean : clean
	rm -f $(NAME) $(NAME_BONUS)

re : fclean all 

.PHONY : all clean fclean re bonus
