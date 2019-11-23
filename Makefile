CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all: myBank.so myBank.a myBankss myBanksd	
myBankss: $(OBJECTS_MAIN) myBank.a 
	$(CC) $(FLAGS) -o myBankss $(OBJECTS_MAIN) myBank.a
myBanksd: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o myBanksd $(OBJECTS_MAIN) ./myBank.so
myBank.so: $(OBJECTS_LIB)
	$(CC) -shared -o myBank.so $(OBJECTS_LIB)
myBank.a: $(OBJECTS_LIB)
	$(AR) -rcs myBank.a $(OBJECTS_LIB)	
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: myBank.c myBank.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so myBankss myBanksd
