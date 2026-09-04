#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

int main(void) {
    int choice;
    double area;

    printf("Select a figure to calculate area:\n");
    printf("1. Circle\n2. Triangle\n3. Trapezoid\n4. Square\n5. Rectangle\n");
    printf("Enter your choice (1-5): ");

    scanf("%d", &choice);

    if (choice == 1) {
        double radius;
        printf("\nEnter radius of circle: ");
        scanf("%lf", &radius);
            area = PI * radius * radius;
            printf("Area of Circle = %.2lf\n", area);
            
    } else if (choice == 2) {
        double base, height;
        printf("\nEnter base and height of triangle: ");
        scanf("%lf %lf", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2lf\n", area);
            
    } else if (choice == 3) {
        double a, b, height;
        printf("\nEnter lengths of parallel sides (a, b) and height: ");
        scanf("%lf %lf %lf", &a, &b, &height);
            area = 0.5 * (a + b) * height;
            printf("Area of Trapezoid = %.2lf\n", area);
            
    } else if (choice == 4) {
        double side;
        printf("\nEnter side length of square: ");
        scanf("%lf", &side);
            area = side * side;
            printf("Area of Square = %.2lf\n", area);
            
    } else if (choice == 5) {
        double length, width;
        printf("\nEnter length and width of rectangle: ");
        scanf("%lf %lf", &length, &width);
            area = length * width;
            printf("Area of Rectangle = %.2lf\n", area);
            
    } else {
        printf("Error: Invalid choice.\n");
    }

    return 0;
}
