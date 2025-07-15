#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	std::ifstream inFile;
	std::ofstream outFile;
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string buffer;

	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	inFile.open(filename.c_str());
	if (!inFile) {
		std::cout << "Unable to open file" << std::endl;
		return 1;
	}
	outFile.open((filename + ".replace").c_str());
	if (!outFile) { 
		std::cout << "Unable to create file" << std::endl;
		return 1;
	}
	while (std::getline(inFile, buffer)) {
		int pos = 0;
		while ((pos = buffer.find(s1, pos)) != std::string::npos && !s1.empty()) {
			buffer = buffer.substr(0, pos) + s2 + buffer.substr(pos + s1.length());
			pos += s2.length();
		}
		outFile << buffer << std::endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}