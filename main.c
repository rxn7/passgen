#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rotalias.h"

int
main(int argc, const char* argv[]){
	#define VALID_NUM 86
	const char* valid = "ABCDEFGHIJKLMNQOPRSTUWYZabcdefghijklmnqoprstuwyz1234567890!@#$%^&*()_-+={}[];:',.<>/?|'";

	u64 length=20;
	if(argc > 1){
		length = strtoull(argv[1], NULL, 0);
	}

	srand(time(0));
	for(u64 i=0; i<length; i++){
		printf("%c", valid[rand() % VALID_NUM]);
	}

	return 0;
}