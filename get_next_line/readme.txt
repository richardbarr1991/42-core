readme.txt

get_next_line - plan v4

variables:

static char * remainder
char * buffer
char * stash

mother function: 
- declares variables, mallocs space for them
- reads BUFFER_SIZE number of chars from file into buffer
- checks for EOF, if found joins buffer chars into stash and returns stash
- if EOF not found joins chars from buffer into stash, checks for newline
- if newline found exits loop, copies chars after nl from stash to remainder, cleans stash 
- frees dynamically allocated memory for buffer
- returns stash

sub-functions:
- nlfound:
	- traverses string, checking for \n each time 
	- if found returns int giving position of \n
- strjoin:
	- creates a char * called stash 
	- gets length of both strings passed to function
	- mallocs enough space for both strings + 1
	- adds chars from buffer to stash
	- returns a pointer to start of stash
- fillremainder:
	- copies chars after \n from stash to remainder
	- cleans stash


