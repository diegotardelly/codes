#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

int main ()
{

	float celsius, fahr;
	int i;

	fahr = MIN;

//	for (i=0; i<=300; i=i+STEP) {
	while (fahr <= MAX) {
		celsius = 5 * (fahr - 32) / 9 ;
		printf ("%.3f = %.3f\n", fahr, celsius);
		fahr = fahr + STEP;
	}

}
