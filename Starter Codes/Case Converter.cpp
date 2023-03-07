// Author:  param3435
#include <iostream>
using namespace std;

/*
e Every type
a aLtErNaTiNg cApS
c Capitalize Word
l lower case
s Sentence case
t tOGGLE cASE
u UPPER CASE*/

void print_array(char result[], int length) {
	for (int i = 0; i < length; ++i) {
		cout << result[i];
	}
	cout << "\n";
}

void aLtErNaTiNgCaPs(char result[], int length) {
	// implement aLtErNaTiNgCaPs
}

void CapitalizeWord(char result[], int length) {
	// implement CapitalizeWord
}

void lowercase(char result[], int length) {
	// implement lowercase
}

void Sentencecase(char result[], int length) {
	// implement Sentencecase
}

void tOGGLEcASE(char result[], int length) {
	// implement tOGGLEcASE
}

void UPPERCASE(char result[], int length) {
	// implement UPPERCASE
}


void formatter(char result[], int length, char format) {
	switch (format) {
	case 'e':
	case 'a': aLtErNaTiNgCaPs(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	case 'c': CapitalizeWord(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	case 'l': lowercase(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	case 's': Sentencecase(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	case 't': tOGGLEcASE(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	case 'u': UPPERCASE(result, length); print_array(result, length);
		if (format != 'e') {
			break;
		}
	}
}

int main() {
	const int LENGTH_MAX = 1e5;
	char text[LENGTH_MAX], result[LENGTH_MAX], format;
	int total_test_cases, length = 0;
	cin >> total_test_cases;
	for (int test_case = 0; test_case < total_test_cases; ++test_case) {
		cin >> length >> format >> ws;
		cin.getline(text, length + 1);
		for (int i = 0; i < length; ++i) {
			result[i] = text[i];
		}
		formatter(result, length, format);
	}
	return 0;
}