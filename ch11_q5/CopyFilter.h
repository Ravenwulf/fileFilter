#pragma once
#include "FileFilter.h"

class CopyFilter : public FileFilter {
public:
	char transform(char ch) { return ch; }
};