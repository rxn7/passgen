#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

__int32_t main(int argc, const char* argv[]){
	/* Valid characters. */
	const char* valid = "`~ABCDEFGHIJKLMNQOPRSTUWYZabcdefghijklmnqoprstuwyz1234567890!@#$%^&*()_-+={}[];:',.<>/?|'\"\\|";
    	__uint32_t valid_length = strlen(valid);

	/* Default length will be 30. */
	size_t length=30;
	
	/* If user has passed length as an argument... */
	if(argc > 1){
		/* ...use it instead. */
		length = strtoull(argv[1], NULL, 0);
	}

	srand(time(0));

	for(size_t i=0; i < length; ++i){
		putc(valid[rand() % valid_length], stdout);
	}

	return 0;
}