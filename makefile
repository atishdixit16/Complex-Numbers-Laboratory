CC=g++
DEPS = complex_header.h
TARGET = complex
OBJS =  complex_methods.o complex_main.o

%.o: %.cpp $(DEPS)
	$(CC) -o $@ -c $<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ 

clean:
	rm *.o

cleanAll:
	rm $(TARGET) *.o
