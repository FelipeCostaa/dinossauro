
TARGET=main
LD=gcc
OBJS=main.o dinossauro.o

all: $(OBJS)
	$(LD) $(OBJS) -o $(TARGET)

dinossauro.o: dinossauro.c
	$(LD) -c dinossauro.c -o dinossauro.o

main.o: main.c
	$(LD) -c main.c -o main.o


clean:
	rm -f *.o
