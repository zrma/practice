CFLAGS=-framework Foundation

all: file google hello property 
file: file.m
	gcc $(CFLAGS) -o $@ $^
google: google.m
	gcc $(CFLAGS) -o $@ $^
hello: hello.m
	gcc $(CFLAGS) -o $@ $^
property: property.m
	gcc $(CFLAGS) -o $@ $^
clean:
	rm -f *.o file google hello property
