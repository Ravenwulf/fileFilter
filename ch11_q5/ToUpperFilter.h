#pragma once
#include "FileFilter.h"

class ToUpperFilter : public FileFilter {
public:
	char transform(char c) { return char(std::toupper(c)); }
};