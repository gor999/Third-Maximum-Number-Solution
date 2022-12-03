.PHONY:create_directories

all:compile

create_directories:
	mkdir -p bin 

compile:create_directories 
	@echo "loading..."
	g++ src/main.cpp src/my_set.cpp -I./inc/ -o bin/main
	./bin/main

remove:
	rm -rf bin