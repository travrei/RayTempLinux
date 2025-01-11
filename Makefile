

default:
	gcc src/main.cpp -Llib -Iinclude -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main && ./main
