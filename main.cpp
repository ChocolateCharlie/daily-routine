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
	readlist(v);

	return(0);
}

