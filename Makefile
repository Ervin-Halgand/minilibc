##
## EPITECH PROJECT, 2019
## 
## File description:
## 
##

NAME		=	libasm.so

SRCS		=	my_strlen.asm \
			my_strcmp.asm \
			my_strncmp.asm \
			my_rindex.asm \
			my_strchr.asm \
			my_memset.asm \
			my_strcasecmp.asm \
			my_strstr.asm \
			my_strpbrk.asm \
			my_memcpy.asm \
			my_memmove.asm \
			my_strspn.asm \
			my_strcspn.asm

ASMFLAGS	=	-f elf64

LDFLAGS		=	-fPIC -shared

ASM		=	nasm

LD		=	gcc

RM		=	rm -f

OBJS		=	$(SRCS:.asm=.o)

%.o: %.asm
		$(ASM) -o $@ $< $(ASMFLAGS)

all:		$(NAME)

$(NAME):	$(OBJS)
		ld $(LDFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
