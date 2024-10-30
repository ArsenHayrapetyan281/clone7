all: simple-copy

simple-copy: simple-copy.o
	g++ -o simple-copy simple-copy.o

simple-copy.o: simple-copy.cpp
	g++ -c simple-copy.cpp -o simple-copy.o

clean:
	rm -f *.o simple-copy

