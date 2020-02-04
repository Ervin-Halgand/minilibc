##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Unit tests
##

SRC  =       	        ../my_strlen.asm \
			../my_strcmp.asm \
			../my_strncmp.asm \
			../my_rindex.asm \
			../my_strchr.asm \
			../my_memset.asm \
			../my_strcasecmp.asm \
			../my_strstr.asm \
			../my_strpbrk.asm \
			../my_memcpy.asm \
			../my_memmove.asm \
			../my_strspn.asm \
			../my_strcspn.asm

SRC_UT	=		tests_strlen.c \
			tests_strcmp.c \
			tests_strncmp.c \
			tests_rindex.c \
			tests_strchr.c \
			tests_memset.c \
			tests_strcasecmp.c \
			tests_strstr.c \
			tests_strpbrk.c \
			tests_memcpy.c \
			tests_memmove.c \
			tests_strcspn.c \
			tests_strspn.c

ASMFLAGS        =       -f elf64

OBJ     =       $(SRC:.asm=.o) $(SRC_UT:.c=.o)

%.o: %.asm
	nasm -o $@ $< $(ASMFLAGS)

CXX     =       	gcc

INC		=		-I ex00/

CXXFLAGS  =       -W -Wall -Wextra --coverage $(INC)

LDFLAGS =       -lcriterion -lgcov

NAME    =       units

tests_run:		$(OBJ)
			$(CXX) -o $(NAME) $(OBJ) $(LDFLAGS)
			./units

clean:
		$(RM) -f $(OBJ)

fclean:         clean
		$(RM) -f $(NAME)

re:             fclean tests_run
