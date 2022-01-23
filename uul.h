#ifndef _uul_h_
#define _uul_h_

#include <string>
#include <utilfuncs/utilfuncs.h>

unicodepoint uucase(unicodepoint cp);
unicodepoint ulcase(unicodepoint cp);
//use Utou8() to convert unicodepoint to utf8-char

//text that contain utf8 chars
std::string uucase(const std::string &stext);
std::string ulcase(const std::string &stext);


#endif
