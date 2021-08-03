NAME     =     Monster_Runner

SRC	=	source/main.c\ 
		source/draw.c\
    	source/init.c\
        source/input.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I./include
CFLAGS	+=	-Wall -Werror -Wextra

LIBS	+=	-lSDL2 -lSDL2_image

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc $(OBJ) $(LIBS) -o $(NAME)

clean:
    rm -f $(OBJ)

fclean:	clean
    rm -f $(NAME)

re:	fclean all

.PHONY:	all obj clean fclean re