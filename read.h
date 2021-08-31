/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* read.h                                                                    */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
/* ------------------------------------------------------------------------- */
#ifndef READ_H_INCLUDED
#define READ_H_INCLUDED

#include "Link.h"
#include <fstream>
#include <string>
#include <vector>

std::vector<Link> readfile();
void readlist(std::vector<Link> &list);

# endif // READ_H_INCLUDED

