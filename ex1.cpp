#include <iostream>

enum rainbowColors
{
  Violet = 0,
  Indigo,
  Blue,
  Green,
  Yellow,
  Orange,
  Red
};

int main(){
	
	int x = 8;
	int y = 6;
	std::cout << std::endl;
	std::cout << x - y << " " << x * y << " " << x+y;
	std::cout << std::endl << std::endl;
	

	rainbowColors MyWorldsColor = Blue;
	std::cout << MyWorldsColor;
	return 0;
}
