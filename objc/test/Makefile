CFLAGS=-framework Foundation

all: file google hello 
file: file.m
	gcc $(CFLAGS) -o $@ $^
google: google.m
	gcc $(CFLAGS) -o $@ $^
hello: hello.m
	gcc $(CFLAGS) -o $@ $^
clean:
	rm -f *.o file google hello
