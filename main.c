#include <stdio.h>
#include "myMath.h"
#define e 2.7182818
double f1 (double a){return sub(add(Power(e,a),Power(a,3)),2);}
double f2 (double a){return add(mul(a,3),mul(Power(a,2),2));}
double f3 (double a){return sub(div(mul(Power(a,3),4),5),mul(a,2));}
int main () {
printf ("Please Insert Real Number : "); float x; scanf("%g",&x);
printf ("\n f1(%g) = e^(%g) + (%g)^2 -2 =  %g\n" , x,x,x,(double)((int)(f1(x)*10000))/10000)     ;
printf ("\n f2(%g) = 3(%g) + 2(%g)^2 =  %g\n" , x,x,x,(double)((int)(f2(x)*10000))/10000)        ;
printf ("\n f3(%g) = (4(%g)^3) / 5 -2(%g) =  %g\n" , x,x,x,(double)((int)(f3(x)*10000))/10000)   ;return 0;}