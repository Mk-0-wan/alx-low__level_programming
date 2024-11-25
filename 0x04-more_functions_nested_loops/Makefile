# make a simple make file to compile simple c programs
# add some parameters to specify which file i want to compile
CFLAGS = -g -Wall -Werror -Wextra -pedantic -std=gnu89
OBJECTS = (wildcard *.c, *.h *.o)

all: $(OBJECTS)
	gcc $(CFLAGS) -o $(OBJECTS)

*.o: *.c
	gcc $(CFLAGS) -c $<

clean:
	rm -f $(OBJECTS)
