#include <stdio.h>

int main () {

	int i = 0;
	char string[20] = "diego tardelly";	
	
	while (string[i] != '\0') {
		i = i + 1;
	}

	printf ("Number of characteres is: %d\n", i);

}
