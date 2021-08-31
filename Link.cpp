/* --------------------------------------------------------------------------*/
/*                                                             DAILY ROUTINE */
/* Link.cpp                                                             LINK */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-31                                                       */
/* ------------------------------------------------------------------------- */
#include "Link.h"

/* ---------------------------- PUBLIC METHODS ----------------------------- */
// CONSTRUCTORS
Link::Link(const std::string &address, const std::string &name) : m_address(address), m_name(name) {}

// GETTERS
std::string Link::get_address() const { return(m_address); }

/* ---------------------------- PRIVATE METHODS ---------------------------- */
void Link::show(std::ostream &stream) const {
	stream << "\ndaily-routine - ";
	stream << (m_name == "" ? "No name" : m_name) << ": " << m_address << "\n";
}

/* ----------------------------- OUT OF CLASS ------------------------------ */
// FRIEND FUNCTIONS
std::ostream& operator<<(std::ostream &stream, const Link &l) {
	l.show(stream);
	return(stream);
}

