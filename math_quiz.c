# include <stdio.h>
# include <math.h>

int main()
{
    float a, b;
    printf("Enter integer a: ");
    scanf("%f", &a);
    printf("Enter integer b: ");
    scanf("%f", &b);

    printf("%f + %f = %f\n",a,b,a+b);
    printf("%f - %f = %f\n",a,b,a-b);
    printf("%f x %f = %f\n",a,b,a*b);
    printf("%f divided by %f = %f\n",a,b,a/b);
    printf("%f to the power of %f = %f\n",a,b,pow(a,b));
    printf("square root of %f is %f\n",a,sqrt(a));
    printf("square root of %f is %f\n",b,sqrt(b));

    return 0;
}