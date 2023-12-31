#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

#define ERROR_ARGC "usage: ./replace <filename> <string1> <string2>"
#define ERROR_OPEN_FILE "Error: could not open file"
#define ERROR_BEFORE_STRING "Error: before string starts from null character"

#define RED "\033[0;31m"
#define RESET "\033[0m"

class Sed
{
	private:
		std::string _filename;
		std::string _before_string;
		std::string _after_string;

	public:
		Sed(std::string filename, std::string s1, std::string s2);
		~Sed(void);
		int replace(void);
};

#endif