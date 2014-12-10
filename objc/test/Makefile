CFLAGS=-framework Foundation

all: file hello 
file: file.m
	gcc $(CFLAGS) -o $@ $^
hello: hello.m
	gcc $(CFLAGS) -o $@ $^
clean:
	rm -f *.o file hello
