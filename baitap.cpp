#include <iostream>
#include <string>

int main() {
	std::string philosopher_name;
	std::cout << "Enter philosopher's name: ";
	std::getline(std::cin, philosopher_name);

	std::string main_course;
	std::cout << "Enter main course: ";
	std::getline(std::cin, main_course);

	std::string side_dish;
	std::cout << "Enter side dish: ";
	std::getline(std::cin, side_dish);

	std::string dessert;
	std::cout << "Enter dessert: ";
	std::getline(std::cin, dessert);

	std::cout << std::endl << "The philosopher " << philosopher_name << " had the following dinner:\n";
	std::cout << "Main course: " << main_course << std::endl;
	std::cout << "Side dish: " << side_dish << std::endl;
	std::cout << "Dessert: " << dessert << std::endl;

	return 0;
}

