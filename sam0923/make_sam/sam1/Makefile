CC = gcc
TARGET = foobar
OBJS = main.o foo.o boo.o

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) -o $@ $^
.c.o: $(CC) -c -o $@ $<
clean:
	rm -f $(TARGET) $(OBJS)
	
