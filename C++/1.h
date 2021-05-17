/*
Description:
Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

Examples:
"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"
*/

#include <string>
#include <sstream>

std::string reverse_words(const std::string & str)
{
  std::ostringstream ostream;
  std::string tmp;
  
  for( int i = 0; i < str.size(); ++i )
  {
    if( str[i] == ' ' )
    {
      ostream << tmp;
      tmp = "";
      ostream << " ";
    }
    else
    {
      tmp.insert(0, 1, str[i]);
    }
  }
  ostream << tmp;
  return ostream.str();
}