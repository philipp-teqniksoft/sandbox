CC := $(shell which clang)
FORMAT :=$(shell which clang-format-3.5)
ANALYZER := $(shell which scan-build)

$(CC):
	@test -e $@ || echo "Please install $(CC)!" && exit 1

$(FORMAT):
	@test -e $@ || echo "Please install $(FORMAT)!" && exit 1

format: $(FORMAT)
	$(FORMAT) -style=file -i *.c

analyze: $(ANALYZER)
	scan-build -V -k -analyzer-config `cat ./.scan_build` make all

all: $(CC) hello

clean:
	@echo "clean up...."
	@rm *.o hello
	@echo "done."

%.o : %.c
	$(CC) -g -c $< -o $@

hello: hello.o
	$(CC) -g -o $@ $^
