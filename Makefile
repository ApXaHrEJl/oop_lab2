all: bin/ex1

bin/ex1: obj/main.o obj/points.o obj/figures.o obj/gfx.o obj/screen.o
	mkdir bin
	g++ -Wall -Werror obj/main.o obj/points.o obj/gfx.o obj/screen.o obj/figures.o -o bin/ex1 -lX11 -lm

obj/screen.o: src/screen.cpp 
	g++ -I include -Wall -Werror -c src/screen.cpp -o obj/screen.o -lX11

obj/figures.o: src/figures.cpp 
	g++ -I include -Wall -Werror -c src/figures.cpp -o obj/figures.o -lX11 -lm

obj/points.o: src/points.cpp 
	g++ -I include -Wall -Werror -c src/points.cpp -o obj/points.o -lm

obj/gfx.o: src/gfx.cpp 
	g++ -I include -Wall -Werror -c src/gfx.cpp -o obj/gfx.o -lX11 -lm

obj/main.o: src/main.cpp
	mkdir obj
	g++ -I include -Wall -Werror -c src/main.cpp -o obj/main.o -lX11

clean:
	rm -rf bin/ obj/

PHONY: all clean
