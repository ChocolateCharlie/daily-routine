/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
/* ------------------------------------------------------------------------- */
#include <iostream>
#include <vector>
#include "Link.h"
#include "read.h"

using namespace std;

int main(int argc, char *argv[]) {
	vector<Link> v = readfile();

	for (int i = 0; i < v.size(); i++) { cout << v[i].get_address() << endl; }

	return(0);
}

