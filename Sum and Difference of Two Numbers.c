#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

	int num1,num2, sum, diff;
	float numf1, numf2, sumf, dif_f;

	scanf("%d %d", &num1, &num2);
	scanf("%f %f", &numf1, &numf2);

	sum = num1+num2;
	diff = num1-num2;

	sumf = numf1+numf2;
	dif_f = numf1-numf2;

	printf("%d %d\n", sum, diff);
	printf("%.1f %.1f\n", sumf, dif_f);


    return 0;
}
