

default:
	gcc main.cpp -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o main && ./main
