#include<stdio.h>
#include<math.h>


int main(void)


{
double d, e, f;
double area, perimeter,s;
scanf("%lf %lf %lf", &d, &e, &f);


if ((d + e) > f&&(d+f)>e&&(e+f)>d)
{
s = (d + e + f) / 2.0;
area = sqrt(s*(s - d)*(s - e)*(s - f));
perimeter = d + e + f;
printf("area = %.2f; perimeter = %.2f", area, perimeter);
}
else
printf("These sides do not correspond to a valid triangle");

return 0;
}