default: clean
	cc -o game Code/src/game.c Code/libs/flecs/flecs.c -I"Code/libs/flecs.h" -lraylib -lGL -lm -lpthread -ldl -lrt -std=gnu99

clean:
	rm -f game