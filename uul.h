#ifndef _uul_h_
#define _uul_h_

#include <string>
#include <utilfuncs/utilfuncs.h>

unicodepoint uucase(unicodepoint cp);
unicodepoint ulcase(unicodepoint cp);
//use Utou8() to convert unicodepoint to utf8-char (in utilfuncs)

//text that contain utf8 chars
std::string uucase(const std::string &stext);
std::string ulcase(const std::string &stext);
inline void touucase(std::string &stext) { stext=uucase(stext); }
inline void toulcase(std::string &stext) { stext=ulcase(stext); }


#endif
