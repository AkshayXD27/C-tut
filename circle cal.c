#include <stdio.h>
#include <math.h>

int main(){
    float radius = 0.0f , area = 0.0f , sa = 0.0f , v = 0.0f;
    const double pi = 3.14159265359;

    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    area = pi * pow(radius,2);
    sa = 4 * pi * pow(radius , 2);
    v = (4.0/3.0) * pi * pow(radius,3);
    printf("Area of circle : %.2f\n",area);
    printf("Surface area of sphere : %.2f\n",sa);
    printf("VOlume of Sphere : %.2f\n",v);
}

// u need gcc -g "circle cal.c" -o "circle cal" -lm to create obj file and to run u need to use ./circle\ cal