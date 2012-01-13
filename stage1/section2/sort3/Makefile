TARGET=sort3
CFLAGS= -O2 -Wall -Wuninitialized -Wextra -ansi -Weffc++ -FORTIFY_SOURCE
all:	${TARGET}
${TARGET}: 	${TARGET}.cpp
	g++ -o ${TARGET} ${TARGET}.cpp
clean:
	rm ${TARGET}

init:
	touch ${TARGET}.in
	vim -o ${TARGET}.cpp
