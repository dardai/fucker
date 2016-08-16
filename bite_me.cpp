#include <iostream>
#include "Sales_item.h"
int main() {
	// comment on Aug.11
	//Sales_item currentT;
	//	if (std::cin >> currentT) {
	//		Sales_item nextT;
	//		while (std::cin >> nextT) {
	//			if (currentT.isbn() == nextT.isbn()) {
	//				currentT += nextT;
	//			}
	//			else {
	//				std::cout << "The transaction record summary is " << currentT << std::endl;
	//				currentT = nextT;
	//			}
	//		}
	//		std::cout << "The transaction record summary is " << currentT << std::endl;
	//	}
	//	else {
	//		std::cerr << "No data my dear~" << std::endl;
	//		return -1;
	//	}
	//	;
	//	/*	std::cout << b1 <<std::endl<< b2<<std::endl;
	//		std::cout << b1 + b2 << std::endl;*/
	//	return 0;
	std::string _A_omo("Brace is also ok");
	std::string demo = "dsa";
	int a = 100, sum = 0, &b = sum, *d = &a, **e = &d;
	//for (int a = 0; a < 10; a++)
	//	b += a;
	int *c = &a;
	*c = *d***e;
	std::cout << a << "\n" << *c << "\n";
	std::cout << demo << _A_omo << "2\t\014\n";
	return 0;
}