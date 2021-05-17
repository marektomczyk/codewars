/*
Description:
Write a function that takes in a string of one or more words, and returns the same string, 
but with all five or more letter words reversed (like the name of this kata).

-Strings passed in will consist of only letters and spaces.
-Spaces will be included only when more than one word is present.

Examples:
spinWords("Hey fellow warriors") => "Hey wollef sroirraw" 
spinWords("This is a test") => "This is a test" 
spinWords("This is another test") => "This is rehtona test"
*/

#include <string>
#include <sstream>

std::string spinWords(const std::string & str)
{
  std::ostringstream ostream;
  std::string tmp;
  
  for( unsigned long i = 0; i < str.size(); ++i )
  {
    if( str[i] == ' ' )
    {
      if( tmp.length() >= 5 )
        std::reverse(std::begin(tmp), std::end(tmp));
      ostream << tmp;
      tmp = "";
      ostream << " ";
    }
    else
    {
      tmp += str[i];
    }
  }
  if( tmp.length() >= 5 )
    std::reverse(std::begin(tmp), std::end(tmp));
  ostream << tmp;
  return ostream.str();
}