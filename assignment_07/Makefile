TARGET=assignment07_Q8
cc=gcc

$(TARGET).out : $(TARGET).o
	$(cc) $(TARGET).o -o $(TARGET).out

$(TARGET).o : $(TARGET).c
	$(cc) -c $(TARGET).c

run:
	./$(TARGET).out

clean:
	rm $(TARGET).o $(TARGET).out

.phony : run clean







