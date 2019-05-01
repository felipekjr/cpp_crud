PROG = cpp_crud! 
CC = g++ -std=c++11
FLAGS = -O -g -Wall
OBJS =  main.o menu.o empresa.o funcionario.o empresa-crud.o funcionario-crud.o
MENU_PATH = ./telas/menu
EMPRESA_PATH = ./modelos/empresa
FUNCIONARIO_PATH = ./modelos/funcionario
CRUD_PATH = ./crud

$(PROG):$(OBJS)				
		$(CC) -o $(PROG) $(OBJS)
		rm -f *.o
		./$(PROG)
all:
	$(PROG)
main.o:
	$(CC) $(FLAGS) -c main.cpp
	
menu.o:
	$(CC) $(FLAGS) -c $(MENU_PATH)/menu.cpp

empresa.o:
	$(CC) $(FLAGS) -c $(EMPRESA_PATH)/empresa.cpp

funcionario.o:
	$(CC) $(FLAGS) -c $(FUNCIONARIO_PATH)/funcionario.cpp

empresa-crud.o:
	$(CC) $(FLAGS) -c $(CRUD_PATH)/empresa-crud.cpp

funcionario-crud.o:
	$(CC) $(FLAGS) -c $(CRUD_PATH)/funcionario-crud.cpp

cls:
	rm -f $(PROG) $(OBJS)