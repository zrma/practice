CFLAGS=-framework Foundation
all: hello

hello: hello.m
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f *.o hello
