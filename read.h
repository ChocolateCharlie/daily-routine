/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* read.h                                                                    */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-09-05                                                       */
/* ------------------------------------------------------------------------- */
#ifndef READ_H_INCLUDED
#define READ_H_INCLUDED

#include <fstream>
#include <string>
#include <vector>
#include "Link.h"
#include "interaction.h"

std::vector<Link> readfile();
void readlist(std::vector<Link> &list);

# endif // READ_H_INCLUDED

