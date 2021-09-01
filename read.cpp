/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* read.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#include "read.h"

std::vector<Link> readfile() {
	const std::string file_name("test.dr");
	std::ifstream stream(file_name.c_str());
  std::vector<Link> v;

	if (!stream) { std::cout << "Erreur d'ouverture fichier." << std::endl; }
	else {
		std::string line;
		while (getline(stream, line)) {
			Link n(line);
			v.push_back(n);
		}
	}

	return(v);
}

void readlist(std::vector<Link> &list) {
	std::string ans;
	std::string command;
	for (int i = 0; i < list.size(); i++) {
		std::cout << "Open " << list[i].get_address() << " ? ";
		std::cin >> ans;
		if (ans == "yes") {
			command = "firefox " + list[i].get_address();
			system(command.c_str());
		}
	}
}

