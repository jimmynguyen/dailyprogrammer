/*
 * Solution to /r/dailyprogrammer Challenge #1 Easy
 * Jimmy Nguyen
 *
 * Prompt:
 *     Create a program that will ask the user's name, age, and reddit username.
 * Have it tell them the information back, in the format:
 * =============================================================================
 * your name is (blank), you are (blank) years old, and your username is (blank)
 * =============================================================================
 *
 * Bonus:
 *     For extra credit, have the program log this information in a file to be
 * accessed later.
 *
 * Link to challenge:
 *     https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
 */
#include <fstream>
#include <iostream>

// define prototypes
void c001e();
void saveToFile(char* output);

// main function
int main(int argc, char *argv[]) {
	c001e();
	return 0;
}

void c001e() {
	// ask for the user's information
	std::string name, age, username;
	std::cout << "Name: ";
	std::getline(std::cin, name);
	std::cout << "Age : ";
	std::getline(std::cin, age);
	std::cout << "Reddit Username: ";
	std::getline(std::cin, username);

	// format the output string
	char output [100];
	sprintf(output, "your name is %s, you are %s years old, and your username is %s\n", name.c_str(), age.c_str(), username.c_str());

	// print the output string
	std::cout << std::endl << output << std::endl;

	// save the output string to a file
	saveToFile(output);
}

void saveToFile(char* output) {
	std::ofstream file;
	file.open("info.log", std::ios::app);
	file << output;
	file.close();
	std::cout << "Your information has been saved in the file \"info.log\" in the current directory" << std::endl;
}
