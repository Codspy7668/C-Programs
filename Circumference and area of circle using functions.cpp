#include <stdio.h>
#include <math.h>

void diameter(float r) {
    printf("Diameter: %f\n", 2*r);
}

void circumference(float r) {
    printf("Circumference: %f\n", 2*M_PI*r);
}

void area(float r) {
    printf("Area: %f\n", M_PI*r*r);
}

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    diameter(r);
    circumference(r);
    area(r);
    return 0;
}

