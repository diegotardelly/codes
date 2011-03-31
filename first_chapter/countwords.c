#include <stdio.h>


int main () {

	char string[500] = "diego tardelly de souza        9rodrigo   !!          braga";
	int i=0, count_words=0;

	while (string[i] != '\0') {
		if (string[i] == ' ') {
			count_words = count_words + 1;
			while ( !isalpha(string[i]) ){
				i = i + 1;
			}
		}
		i = i + 1;
	}
	if (string[i] == '\0' && i > 0) {
		count_words = count_words + 1;
	} 	


	printf ("Number of words is: %d\n", count_words);

}
		
