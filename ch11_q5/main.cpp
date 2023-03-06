#include "EncryptionFilter.h"
#include "ToUpperFilter.h"
#include "CopyFilter.h"
#include "LinebreakFilter.h"
#include <fstream>

int main() {
	

	std::ifstream input1("sourceText.txt");
	std::ofstream output1("encryptedText.txt");
	EncryptionFilter ef(1);
	ef.doFilter(input1, output1);
	//streams closed through failure to get char (stream.close() not required)
	std::ifstream input2("sourceText.txt");
	std::ofstream output2("uppercaseText.txt");
	ToUpperFilter upf;
	upf.doFilter(input2, output2);

	std::ifstream input3("sourceText.txt");
	std::ofstream output3("copyText.txt");
	CopyFilter cf;
	cf.doFilter(input3, output3);

	std::ifstream input4("sourceText.txt");
	std::ofstream output4("linebreakText.txt");
	LinebreakFilter lbf;
	lbf.doFilter(input4, output4);

	return 0;
}