//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    int a, b, c;

    // Read three side lengths
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a triangle\n");
    }
    // All sides are equal
    else if (a == b && b == c) {
        printf("Equilateral\n");
    }
    // Two sides are equal
    else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    }
    // All sides are different
    else {
        printf("Scalene\n");
    }

    return 0;
}
