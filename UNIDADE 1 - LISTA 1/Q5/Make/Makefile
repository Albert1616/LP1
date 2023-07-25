PROG = primoFatorial
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic
OBJS = main.o fatorial.o primalidade.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o : 
	$(CC) $(CPPFLAGS) -c ../src/main.cpp

fatorial.o : ../headers/fatorial.h
	$(CC) $(CPPFLAGS) -c ../src/fatorial.cpp

primalidade.o : ../headers/primalidade.h
	$(CC) $(CPPFLAGS) -c ../src/primalidade.cpp

clean:
	rm -f *.o