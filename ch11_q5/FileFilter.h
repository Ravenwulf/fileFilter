#pragma once
#include <fstream>
#include <iostream>
class FileFilter {
public:
	virtual char transform(char ch) = 0;
	void doFilter(std::ifstream& in, std::ofstream& out) {
		std::cout << "DEBUG: FILTERING from obj at " << this << std::endl;
		while (in) {
			out.put(this->transform(in.get()));
		}
		long pos = out.tellp();
		out.seekp(pos - 1);
		out.write(" ", 1);
	};
};