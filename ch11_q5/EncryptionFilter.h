#pragma once
#include "FileFilter.h"

class EncryptionFilter : public FileFilter {
private:
	int key;
public:
	EncryptionFilter(int k = 0) { key = k; };
	char transform(char c) { return char(c + this->key); }
};