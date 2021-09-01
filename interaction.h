/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* interaction.h                                                             */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-01                                                       */
/* ------------------------------------------------------------------------- */
#ifndef INTERACTION_H_INCLUDED
#define INTERACTION_H_INCLUDED

#include <fstream>
#include <iostream>
#include <string>
#include "Link.h"
#include "read.h"

const std::string dr_prompt = "daily-routine: ";
const std::string greetings_header = "header.txt";
const std::string dr_yes[] {"oui", "Oui", "o", "O", "yes", "Yes", "y", "Y", ""};

bool ask_for(std::string s);
void goodbye();
void greetings();
bool menu();

# endif // INTERACTION_H_INCLUDED

