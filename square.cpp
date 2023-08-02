// This program declares the Square class and uses member functions to find
// the perimeter and area of the square

// Ashur Baroutta

#include <iostream>
using namespace std;

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square. TO DO THIS SEE
class Square{
private: 
  float side;
public:

  Square(); //default
  Square(float length); // parameterized constructor
  ~Square(); // destructor 

  void setSide(float length);
  float findArea();
  float findPerimeter();

};

Square::Square() : side(1.0){}

Square::Square(float length) : side(length){}

Square::~Square(){
  cout << "destructor called" << endl;
}

// THE IMPLEMENTATION SECTION.

int main()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	// FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
	// SIDE OF THE SQUARE. (This is stored in size)
  cout << "Enter length of square's side: " << endl;
  cin >> size;
	// FILL IN THE CODE THAT CALLS SetSide.
  box.setSide(size);

	// FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
	// AND PRINT OUT THE AREA TO THE SCREEN.
  float area = box.findArea();
  cout << "Area = " << area << endl;
	// FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
	// FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
  float perimeter = box.findPerimeter();
  cout << "Perimeter = " << perimeter << endl;

  
  Square box1(9);
  
  cout<< "The area of box1 is " << box1.findArea() << endl;

  cout << "The perimeter of box1 is " << box1.findPerimeter()<< endl;

  
	return 0;
}

// _______________________________________________________
//
// Implementation section	Member function implementation

//**************************************************
//  setSide
//
//  task:	 This procedure takes the length of a side and
//	         places it in the appropriate member data
//  data in: length of a side
//***************************************************

void Square::setSide(float length)
{
	side = length;
}

//**************************************************
//	findArea
//
//  task:	       This finds the area of a square
//  data in:       none (uses value of data member side)
//  data returned: area of square
//***************************************************

float Square::findArea()
{
	return side * side;
}

//**************************************************
//	findPerimeter
//
//  task:	       This finds the perimeter of a square
//  data in:       none (uses value of data member side)
//  data returned: perimeter of square
//***************************************************

float Square::findPerimeter()
{
	return 4 * side;
}