 PROG = cpp_crud! 
 CC = g++
 FLAGS = -O0 -g -Wall
 OBJS = main.o mesa.o jogador.o dado.o

 $(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)
	rm -f *.o
	./$(PROG)
 all:
	$(PROG)
 main.o:
	$(CC) $(FLAGS) -c main.cpp
 mesa.o: mesa.h
	$(CC) $(FLAGS) -c mesa.cpp
 jogador.o: jogador.h
	$(CC) $(FLAGS) -c jogador.cpp
 dado.o: dado.h
	$(CC) $(FLAGS) -c dado.cpp
 cls:
	rm -f $(PROG) $(OBJS)