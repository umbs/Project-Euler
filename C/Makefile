CC = gcc 

WARN = -Wall 
DBGS = -ggdb 

CFLAGS = -c
OBJFLAGS = -o 

OBJS = %.o
HEADERS = global.h 
SRC  = %.c

all: $(OBJS)
	$(CC) $(OBJFLAGS) $(BIN) $(OBJS)

$(OBJS): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) $(DBGS) $(SRC)  

.PHONY: clean 

clean: 
	rm -rf *.o 
