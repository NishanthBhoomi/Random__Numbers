#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int  main(void) 
{
char *str = "gau.dat";
printf("Mean: %lf\nVariance: %lf\n",mean(str), variance(str));
return 0;
}
