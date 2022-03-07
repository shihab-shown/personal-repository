#include <stdio.h>
#include <math.h>
    int main()
{

    float a,b,c,s,Area,Value;
    printf("Enter three side of the Triangle\n");
    scanf("%f %f %f" ,&a,&b,&c);
    s=(a+b+c)/2;
    Value=s*(s-a)*(s-b)*(s-c);
    Area=sqrt(Value);
    printf("The area is %f",Area);
    return 0;
}
