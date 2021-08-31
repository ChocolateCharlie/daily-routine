/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* Link.h                                                               LINK */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
/* ------------------------------------------------------------------------- */
#ifndef LINK_H_INCLUDED
#define LINK_H_INCLUDED

#include <iostream>
#include <string>

class Link {
	public:
		Link(const std::string &address, const std::string &name = "");
		std::string get_address() const;

	private:
		void show(std::ostream &stream = std::cout) const;

		std::string m_address;
		std::string m_name;

		friend std::ostream& operator<<(std::ostream &stream, const Link &l);
};

# endif // LINK_H_INCLUDED

