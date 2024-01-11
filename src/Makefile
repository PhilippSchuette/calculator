CC 		= clang
INCLUDE = -I../include/
OUT		= ../out/
CFLAGS 	= -std=gnu17 -Wall
OBJS	= $(OUT)main.o $(OUT)parser.o $(OUT)messages.o $(OUT)operations.o \
		  $(OUT)cli.o $(OUT)lexer.o

all: $(OUT)calculator

$(OUT)calculator: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OUT)main.o: main.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding main.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c main.c -o $@

$(OUT)parser.o: parser.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding parser.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c parser.c -o $@

$(OUT)messages.o: messages.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding messages.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c messages.c -o $@

$(OUT)operations.o: operations.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding operations.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c operations.c -o $@

$(OUT)cli.o: cli.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding cli.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c cli.c -o $@

$(OUT)lexer.o: lexer.c
	if [ ! -e $(OUT) ]; then mkdir $(OUT); fi
	echo "[INFO] rebuilding lexer.o..."
	$(CC) $(CFLAGS) $(INCLUDE) -c lexer.c -o $@
