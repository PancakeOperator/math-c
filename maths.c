#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double Radius;
    double circumference;
    double area;
    double diameter;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &Radius);

    circumference = 2 * PI * Radius;
    diameter = 2 * Radius;
    area = PI * Radius * Radius;

    printf("circumference: %lf\n", circumference);
    printf("diameter: %lf\n", diameter);
    printf("area: %lf\n", area);

    return 0; 
}