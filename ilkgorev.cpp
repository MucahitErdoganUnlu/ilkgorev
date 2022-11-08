#include <iostream>
#define G 9.80665
#define DISTANCE(t) 0.5*(G)*(t)*(t)

int main(){
	std::cout << "Enter the time: ";
	float t;
	std::cin >> t;
	std::cout << DISTANCE(t);
}
