/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#include <iostream>
#include "Link.h"
#include "interaction.h"
#include "read.h"

using namespace std;

int main(int argc, char *argv[]) {
	greetings();
	while(menu()) {;}
	goodbye();

	return(0);
}

