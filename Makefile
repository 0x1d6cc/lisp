CC=gcc
SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:%.c=%.o)
CFLAGS:=-Wall -std=c11 -O2 -I./include
CFLAGS+=$(DEBUG)
export CFLAGS
MAIN=lisp

all: $(MAIN)

$(MAIN): $(OBJS)
	@mkdir -p ./$(BIN_DIR)
	$(CC) -C $(OBJS) -o $(MAIN)

clean:
	rm -rf $(MAIN) $(OBJS) $(BIN_DIR)
	find . -name "*~" -exec rm {} \;
	find . -name "*.o" -exec rm {} \;

tests:

.PHONY: clean tests
