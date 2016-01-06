all: hello

hello: hello.o
	$(CC) -o $@ $^
