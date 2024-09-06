// Adam Sell
//September 5, 2024
//COP3223C

//Calculates the dimmensions of a circle

#include <stdio.h>
#include <math.h>

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

    printf("The distance is: %.2lf\n", distance);

    return distance;
}

double calculatePerimeter(){

}

double calculateArea(){

}

double calculateWidth(){

}

double calculateHeight(){

}

int main(int argc, char **argv){
    calculateDistance();
    // calculatePerimeter();
    // calculateArea();
    // calculateWidth();
    // calculateHeight();
    return 0;
}