CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all:  libmyBank.a  myBankss	
myBankss: $(OBJECTS_MAIN) myBank.a 
	$(CC) $(FLAGS) -o myBankss $(OBJECTS_MAIN) libmyBank.a
libmyBank.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)	
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so myBanksd
