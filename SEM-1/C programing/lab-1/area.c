#include <stdio.h>

#define PI 3.14

float areaOfTriangle(float l, float b)
{
    return (l * b) / 2;
}

float areaOfRectangle(float l, float b)
{
    return l * b;
}

float areaOfCircle(float r)
{
    return PI * r * r;
}

float circumferenceOfCircle(float r)
{
    return 2 * PI * r;
}

int main()
{
    float l, b, r;

    printf("Enter length: ");
    scanf("%f", &l);
    
    printf("Enter radius: ");
    scanf("%f", &r);
    
    printf("Enter breadth: ");
    scanf("%f", &b);

    printf("Area of triangle: %.2f\n", areaOfTriangle(l, b));
    printf("Area of rectangle: %.2f\n", areaOfRectangle(l, b));
    printf("Area of circle: %.2f\n", areaOfCircle(r));
    printf("Circumference of circle: %.2f\n", circumferenceOfCircle(r));

    return 0;
}
