//*************************************************************************
// Assignment 1
// fracturing.c
// Author: Matthew Gonzalez
// UCFiD: 5637788
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: Utilize multiple internal functions, experience fracturing code
// Input: 
// Output:  
//*************************************************************************


#include <stdio.h>
#include <math.h>
#define PI 3.14159

//*********************************************
// double askForUserInput()
// Purpose: Take user input
//*********************************************

double askForUserInput() 
{
    double Value;
    scanf("%lf", &Value);
    return Value;
}


//*********************************************
// double getPointX1()
// Purpose: Establish x1
//*********************************************

double getPointX1()
{
    double x1;
    printf("Enter X1 Point: ");
    x1 = askForUserInput();
    return x1;
}


//*********************************************
// double getPointX2()
// Purpose: Establish x2
//*********************************************

double getPointX2()
{
    double x2;
    printf("Enter X2 Point: ");
    x2 = askForUserInput();
    return x2;
}


//*********************************************
// double getPointY1()
// Purpose: Establish y1
//*********************************************

double getPointY1()
{
    double y1;
    printf("Enter Y1 Point: ");
    y1 = askForUserInput();
    return y1;
}


//*********************************************
// double getPointY2()
// Purpose: Establish y2
//*********************************************

double getPointY2()
{
    double y2;
    printf("Enter Y2 Point: ");
    y2 = askForUserInput();
    return y2;
}


//*********************************************
// double calculateDistance()
// Purpose: calculate distance, return double to main
//*********************************************

double calculateDistance() 
{
    double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    double distance = 0;
 
    x1 = getPointX1();
    x2 = getPointX2();
    y1 = getPointY1();
    y2 = getPointY2();

    distance = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
    printf("The distance between the two points is %lf \n", distance);
    
    return distance;
}


//*********************************************
// double calculateDistanceNoPrint()
// Purpose: calculate distance without conclusion print statement, for use in other functions
//*********************************************

double calculateDistanceNoPrint() 
{
    double x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    double distance = 0;
 
    x1 = getPointX1();
    x2 = getPointX2();
    y1 = getPointY1();
    y2 = getPointY2();

    distance = sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
    printf("Point #1 entered: x1 = %lf; y1 = %lf \n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf \n", x2, y2);
      
    return distance;
}


//*********************************************
// double calculatePerimeter() 
// Purpose: calculate perimeter
//*********************************************

double calculatePerimeter() 
{
    double distance = 0, perimeter = 0;

    distance = calculateDistanceNoPrint();
    perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is %lf \n", perimeter);
    
    return 5.0;
}


//*********************************************
// double calculateArea()
// Purpose: calculate area
//*********************************************

double calculateArea() 
{
    double distance = 0, area = 0, radius = 0;

    distance = calculateDistanceNoPrint();
    radius = distance / 2;
    area = PI * (radius * radius);
    printf("The area of the city encompassed by your request is %lf \n", area);
    
    return 3.0;
}


//*********************************************
// double calculateWidth()
// Purpose: calculate width by recalling distance
//*********************************************

double calculateWidth() 
{
    double distance = 0, width =0;

    distance = calculateDistanceNoPrint();
    width = distance;
    printf("The width of the city encompassed by your request is %lf \n", width);
    
    return 2.0;
}


//*********************************************
// double calculateHeight()
// Purpose: calculate height by recalling distance
//*********************************************

double calculateHeight() 
{
    double distance = 0, height =0;

    distance = calculateDistanceNoPrint();
    height = distance;
    printf("The height of the city encompassed by your request is %lf \n", height);
    
    return 1.0;
}


//*********************************************
// int main(int argc, char **argv)
// Purpose: Call all other functions
//*********************************************

int main(int argc, char **argv) 
{
    double distance = calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

