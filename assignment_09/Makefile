TARGET=assignment09_Q5

cc=gcc


$(TARGET).out: $(TARGET).o 
	$(cc) $(TARGET).o -o  $(TARGET).out

$(TARGET).o : $(TARGET).c
	$(cc) -c $(TARGET).c

out:
	./$(TARGET).out

clean:
	rm *.o $(TARGET).out

.phony: out clean


