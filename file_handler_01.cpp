#include <iostream>

constexpr int maxBuffer = 1024;

using namespace std;

int main() {

	const char *filename = "mythisfile.txt";
	const char *information = "lorem ipsum dolor sit amet ";

// Writing to file

//	FILE *fh = fopen(filename, "a");
//
//	for (int i=0; i<50; ++i) {
//		fputs(information, fh);
//	}
//	fclose(fh);

// Reading from file

	char buf[maxBuffer];
	
	FILE *fh = fopen(filename, "r");

	while(fgets(buf, maxBuffer, fh)) {
		fputs(buf, stdout);
	}

	fclose(fh);

	return 0;
}
