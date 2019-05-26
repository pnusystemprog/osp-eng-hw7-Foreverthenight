CC = gcc
CFLAGS = -Wall -g -c
OBJS = phoneBookMain.o register.o print.o search.o delete.o

%.o: %.c
	$(CC) $(CFLAGS) $<
phoneBookMain: $(OBJS)
	$(CC) -o phoneBookMain $(OBJS) 
clean:
	rm -f phoneBookMain $(OBJS)

