#include <iostream>

int calculateArea(int length, int width) { //function definition
    return length * width; //return the area of the rectangle
}

int main() {
    int length, width, area; //local variables
    std::cout << "Enter the length of the rectangle: "; //prompt user for input
    std::cin >> length; //read input from user and store it in length
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    area = calculateArea(length, width); //call the calculateArea() function
    std::cout << "The area of the rectangle is " << area << std::endl;
    return 0;
}
