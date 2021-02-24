run: display
	./display

display: display.o
	gcc display.o -o display

display.o: display.c
	gcc -c display.c -o display.o

clear:
	rm -rf display.o display
