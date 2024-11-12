default: clean
	cc -o game game.c ./libs/flecs/flecs.c -I"./libs/" -lraylib -lGL -lm -lpthread -ldl -lrt -std=gnu99

clean:
	rm -f game