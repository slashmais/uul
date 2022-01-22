#ifndef _uul_h_
#define _uul_h_

#include <string>
#include <utilfuncs/utilfuncs.h>


/*
	This create & use a look-up table (std::map) in memory
*/


unicodepoint uucase(unicodepoint cp);
unicodepoint ulcase(unicodepoint cp);

std::string uucase(const std::string &s);
std::string ulcase(const std::string &s);


#endif
