/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* interaction.cpp                                                           */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#include "interaction.h"

void goodbye() {
	std::cout << dr_prompt << "Goodbye !" << std::endl;
}

void greetings() {
	std::ifstream greetings_stream(greetings_header.c_str());
	if (!greetings_stream) {
		std::cout << dr_prompt;
		std::cout << "Error : header could not be loaded." << std::endl;
	}
	else {
		std::string line;
		while(getline(greetings_stream, line)) { std::cout << line << std::endl; }
	}
	std::cout << dr_prompt << "Hello !" << std::endl;
}

//bool menu();


