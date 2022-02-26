#ifndef _uul_h_
#define _uul_h_

#include <string>
#include <utilfuncs/utilfuncs.h>

/*
  uucase, ulcase
    process & return:
      converts and return the upper/lower case value of 'cp'
*/
unicodepoint uucase(unicodepoint cp);
unicodepoint ulcase(unicodepoint cp);
//use Utou8() to convert unicodepoint to utf8-char (in utilfuncs)

/*
  uucase, ulcase
    process & return:
      converts (for every utf8 char in 'stext') and return the upper/lower cased 'stext'
*/
std::string uucase(const std::string &stext);
std::string ulcase(const std::string &stext);

/*
  touucase, toulcase
    process & return:
      converts every utf8 char in 'stext' in-place to upper/lower case
*/
inline void touucase(std::string &stext) { stext=uucase(stext); }
inline void toulcase(std::string &stext) { stext=ulcase(stext); }


#endif
