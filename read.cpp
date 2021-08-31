/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* read.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
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

