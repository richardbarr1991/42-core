readme.txt

get_next_line - plan v3

variables:

static char * remainder
char * buffer
char * stash

MOTHER FUNCTION :

- Error checking
- declares variables, mallocs space for them


SUB FUNCTIONS :

- fillstash:
	- declare int bytes_read = 0;
	- read BUFFER_SIZE number of chars from fd into buffer, store return value in bytes_read
	- returns stash

- nlfound:
	- traverses string, checking for \n each time
	- if found returns int giving position of \n

- fillremainder:
	- copies chars after \n from stash to remainder
	- cleans stash
