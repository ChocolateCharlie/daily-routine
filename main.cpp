/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
#include "Link.h"
#include "interaction.h"
#include "read.h"

using namespace std;

int main(int argc, char *argv[]) {
	bool keep_running = true;

	greetings();
	while(keep_running) {
		// keep_running = menu();
		keep_running = false;
	}
	goodbye();
/*
	vector<Link> v = re adfile();
	readlist(v);
*/

	return(0);
}

