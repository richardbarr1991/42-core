#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

#define MAX_LENGTH 1256

int	main(void)
{
	int dict = open("numbers.dict", O_RDONLY);
	char line[MAX_LENGTH];
	int current_line_number = 1;
	int desired_line_number = 5;

	while (current_line_number < desired_line_number)
	{
        	ssize_t bytes_read = read(dict, line, MAX_LENGTH);
        	if (bytes_read <= 0)
		{
			printf("Desired line number is beyond the end of the file.\n");
			close(dict);
			return 1;
		}

        // Count the number of newline characters to track the current line number
       		 for (int i = 0; i < bytes_read; i++) 
		 {
			 if (line[i] == '\n')
			{
				current_line_number++;
				if (current_line_number == desired_line_number)
				{
					break;
				}
			}
		 }
	}

	ssize_t bytes_read = read(dict, line, MAX_LENGTH);
	line[bytes_read] = '\0';
	printf("First line: %s\n", line);
	printf("desired line: %s\n", );
	
	close(dict);

	return 0;
}
