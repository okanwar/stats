CC = gcc
CFLAGS = -g -Wall -Werror
LDFLAGS = -lm

TARGET = stats rotate-test

all: $(TARGET)

stats: stats.c readfile.o
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

readfile.o: readfile.c readfile.h
	$(CC) $(CFLAGS) -c $<

rotate-test: rotate-test.c rotate.s 
	$(CC) $(CFLAGS) -o $@ $^

comp280-p04-%.tar.gz: stats.c rotate.s project04.txt
	tar -czf $@ $<

clean:
	$(RM) $(TARGET) *.o *.tar.gz
