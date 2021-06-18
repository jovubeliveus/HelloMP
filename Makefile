# sample makefile for the C PPTemplate
# j. behrens 06/2021

CC = gcc
#
# THIS OPTION IS FOR THE DATA PARALLEL VERSION (-mp)
CCFLAGS = -fopenmp -I/opt/local/include

DATLIBS= -lgomp -lm

OBJECTS = \
Hello.o 


# default make

all::
	@make Hello
	@make clear

# make object files

.c.o:
	${CC} ${CCFLAGS} -c $<

# make target (executable)

Hello: ${OBJECTS}
	${CC} ${CCFLAGS} -o $@ ${OBJECTS} ${LIBS}

clear::
	@rm *.o

