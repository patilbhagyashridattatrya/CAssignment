TARGET = demo1

CSRC=$(TARGET).c
COBJ=$(CSRC:.c=.o)

cc=gcc
CFLAGS=
LDFLAGS=

$(TARGET) : $(COBJ).o
	$(CC)-O  $(TARGET) $(LDFLAGS) $(COBJ)

$(COBJ) : $(CSRC)
	$(CC) -c $(CFLAGS) $(CSRC)

run :
	./$(TARGET)

clean :
	rm $(COBJ).o $(TARGET)

.phony: run clean
