#include <stdio.h>

int main () {

	char string[500]="lista telefonica - 9968 3535, 32222462, 81415587";
	int i,j=0;
	int white=0, others=0;
	int numbers[10];
	
	for (i=0; i<10; i++) {
		numbers[i] = 0;
	}

	while (string[j] != '\0') {
		if (isdigit(string[j])) {
			numbers[string[j] - '0']++;
		}
		else if (string[j] == ' ') {
			white++;
		}
		else {
			others++;
		}
		j++;	
	}
	
	for (i=0; i<10; i++) {
		printf("%d  ", numbers[i]);
	}	

	printf(", white = %d, other = %d\n", white, others);
}
