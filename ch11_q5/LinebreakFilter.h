#pragma once
#include "FileFilter.h"

class LinebreakFilter : public FileFilter {
public:
	char transform(char c) { 
		if (c == '\n') {
			return ' ';
		} else {
			return c;
		}
	}
};