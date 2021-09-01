/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* interaction.cpp                                                           */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#include "interaction.h"

bool ask_for(std::string s) {
	std::string ans;

	std::cout << dr_prompt << s << " ? ";
	getline(std::cin, ans);

	for (int i = 0; i < 9; i++) {
		if (ans == dr_yes[i]) { return(true); }
	}

	return(false);
}

void goodbye() {
	std::cout << dr_prompt << "Goodbye !" << std::endl;
}

void greetings() {
	std::ifstream greetings_stream(greetings_header.c_str());

	if (!greetings_stream) {
		std::cout << dr_prompt;
 		std::cout << "Error! Header could not be loaded." << std::endl;
	}
	else {
 		std::string line;
		while(getline(greetings_stream, line)) { std::cout << line << std::endl; }
	}

 	std::cout << dr_prompt << "Hello !" << std::endl;
}

bool menu() {
 	if (ask_for("Read unique list")) {
 		std::vector<Link> v = readfile();
		readlist(v);
		return(true);
	}
	return(false);
}

