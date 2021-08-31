/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* read.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
/* ------------------------------------------------------------------------- */
#include <vector>
#include "Link.h"
#include "read.h"

void readfile() {
	const std::string file_name("test.dr");
	std::ifstream stream(file_name.c_str());

	if (!stream) { std::cout << "Erreur d'ouverture fichier." << std::endl; }
	else {
		std::vector<Link> v;
		std::string line;
		while (getline(stream, line)) {
			Link n(line);
			v.push_back(n);
		}

		for (int i = 0; i < v.size(); i++) {
			std::cout << v[i].get_address() << "\n";
		}
	}
}

