#src = push_swap.c \
#	helper_functions.c \
#	helper_functions_1.c \
#	free_memory.c \
#	stack_operations.c \
#	stack_operations_1.c \
#	stack_operations_2.c
	
src := $(wildcard *.c) $(wildcard */*.c)
src := $(filter-out libft/%, $(src))
obg = $(src:.c=.o)

name = lib.a 

all : $(name)

$(name) : $(obg)
	ar -rcs $(name) $(obg) 

%.o:%.c
	cc -Wall -Wextra -Werror -c $< -o $@

clean :
	rm -f $(obg)

fclean : clean
	rm -f $(name)

re : fclean all 

run: re clean 
	cc -Wall -Wextra -Werror main.c $(name) libft/libft.a
	rm -f $(obg)
	clear

.PHONY : all clean fclean re 
