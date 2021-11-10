all: 
	gcc passgen.c -o passgen -std=gnu99

install: 
	make
	sudo cp ./passgen /usr/bin/pasgen
