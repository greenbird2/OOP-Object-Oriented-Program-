#include <iostream> // include the input output stream
#include <string> // include the string library
#include "header.h" // include the header file

// if you like to use the namespace std then you can use it here
// using namespace std;






// first funtion ================================= //
void function() {

	Bike Honda; // object of the class bike
	Honda.color = "Red";
	Honda.name = "Honda";
	Honda.model = "2019";

	// space for better readability
	std::cout << "=================================" << std::endl;

	// print the bike details
	std::cout << "	Your bike is ready!" << std::endl;
	std::cout << "	Your bike is " << Honda.color << std::endl;
	std::cout << "	Your bike is " << Honda.name << std::endl;
	std::cout << "	Your bike is " << Honda.model << std::endl;
}



// second function ================================ // 
void function2() {

	Kawasaki Kawa; // object of the class Kawasaki
	Kawa.color = "Green";
	Kawa.name = "Kawasaki";
	Kawa.model = "2020";

	// space for the better readability
	std::cout << "=================================" << std::endl;

	// print the bike details
	std::cout << "	Your bike is ready!" << std::endl;
	std::cout << "	Your bike is " << Kawa.color << std::endl;
	std::cout << "	Your bike is " << Kawa.name << std::endl;
	std::cout << "	Your bike is " << Kawa.model << std::endl;


}


// third function ================================ //
void function3() {
	HeroHonda Hero;  // object of the class HeroHonda

	Hero.color = "Blue";
	Hero.name = "Splendor";
	Hero.model = "2018";

	// space for better readability
	std::cout << "=================================" << std::endl;


	// print the bike details
	std::cout << "	Your bike is ready!" << std::endl;
	std::cout << "	Your bike is " << Hero.color << std::endl;
	std::cout << "	Your bike is " << Hero.name << std::endl;
	std::cout << "	Your bike is " << Hero.model << std::endl;

}




// fourth function ============================== //
void function4() {
	suzuki suzu; // object of the class suzuki

	suzu.color = "Black";
	suzu.name = "Gixxer";
	suzu.model = "2017";

	// space for better readability
	std::cout << "=================================" << std::endl;

	// print the bike details
	std::cout << "	Your bike is ready!" << std::endl;
	std::cout << "	Your bike is " << suzu.color << std::endl;
	std::cout << "	Your bike is " << suzu.name << std::endl;
	std::cout << "	Your bike is " << suzu.model << std::endl;
	std::cout << "=================================" << std::endl;
}



// main function ================================ // 

int main() {

	function(); // calling the function (1)
	function2(); // calling the function (2)
	function3(); // calling the function (3)
	function4(); // calling the function (4)
	std::cout << " Thank you for visiting us!" << std::endl;


	return 0;  // it the return type of the main function
}