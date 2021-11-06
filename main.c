#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef unsigned long long u64;

int main(int argc, const char* argv[]){
    const char* valid = "`~ABCDEFGHIJKLMNQOPRSTUWYZabcdefghijklmnqoprstuwyz1234567890!@#$%^&*()_-+={}[];:',.<>/?|'\"\\|";
    int valid_length = strlen(valid);

	u64 length=20;
	if(argc > 1){
		length = strtoull(argv[1], NULL, 0);
	}

	srand(time(0));
	for(u64 i=0; i<length; i++){
		printf("%c", valid[rand() % valid_length]);
	}

	return 0;
}
