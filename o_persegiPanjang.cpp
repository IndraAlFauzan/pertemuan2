#include <iostream>
using namespace std;

class Rectangle {
    //These are private member variables of the Rectangle class
    int length;
    int width;
public:
    //constructor for the Rectangle class, which takes two integer parameter
    Rectangle(int l, int w) {
        length = l; //assign the value of the parameter l to the member variable length
        width = w; //assign the value of the parameter w to the member variable width
    }
    void opening(){
        cout << "Example for oop" << endl;
        cout << "Calculate area of rectangle" << endl;
    }
    int calculateArea() { 
        return length * width; //return the area of the rectangle
    }
    int calculateArea2(int l, int w) { 
        return l * w; //return the area of the rectangle
    }
};

int main() {
    
    int length, width, area; //local variables
    Rectangle rect(length, width); //create a Rectangle object
    rect.opening(); //call the opening() function
    cout << "Enter the length of the rectangle: "; //prompt user for input
    std::cin >> length; //read input from user and store it in length
    cout << "Enter the width of the rectangle: "; //prompt user for input
    std::cin >> width; //read input from user and store it in width
    
    area = rect.calculateArea(); //call the calculateArea() function
    int area2 = rect.calculateArea2(length, width); //call the calculateArea() function
    cout << "The area of the rectangle is " << area << std::endl; //print the area
    cout << "The area of the rectangle2 is " << area2 << std::endl; //print the area
    return 0; //return 0 to indicate that the program ran successfully
}
