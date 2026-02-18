#include <stdio.h>

int main() {
    float l, w, p;
    // perimeter of rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter width of the rectangle: ");
    scanf("%f", &w);

    
    p = 2 * (l + w);

    printf("Perimeter of the rectangle = %.2f units\n", p);

    return 0;
}
// perimeter of rectangle
