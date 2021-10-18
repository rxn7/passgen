all: 
	gcc main.c -o passgen

install: 
	make
	sudo cp ./passgen /usr/bin/pasgen
