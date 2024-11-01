default: clean
	cc -o game game.c -I. -lraylib -lGL -lm -lpthread -ldl -lrt

clean:
	rm -f game

simple: clean
	cc -o game game.c -I. -lraylib -lGL -lpthread