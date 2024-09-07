// Adam Sell
//September 5, 2024
//COP3223C

//Calculates the dimmensions of a circle

#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance(){
    double x1;
    double y1;
    double x2;
    double y2;
    double distance;

    printf("Enter 1st point coordinates:");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter 2nd point coordinates:");
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    return distance;
}

double calculatePerimeter(){
    double distance = calculateDistance();

    double perimeter = (PI * distance);

    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);

    return 3;
}

double calculateArea(){
    double distance = calculateDistance();

    double area = (0.25 * PI * pow(distance, 2));

    printf("The area of the city encompassed by your request is: %.2lf\n", area);

    return 3;
}

double calculateWidth(){

}

double calculateHeight(){

}

int main(int argc, char **argv){
    double distance = calculateDistance();
    printf(" The distance between the two points is: %.2lf\n", distance);
    
    calculatePerimeter();
    calculateArea();
    // calculateWidth();
    // calculateHeight();
    return 0;
}