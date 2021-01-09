#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

/*
Dla otrzymanego napisu oraz znaku, 
znajdz liczbe wystapien znaku w napisie.
*/

//Zlozonosc Czasowa O(n)
//Zlozonosc Pamieciowa O(1)
int policzZnakV1(const string& slowo, const char& znak) {

	int licznik = 0;

	for (auto x : slowo) {
		if (x == znak)
			licznik++;
	}

	return licznik;
}

void test1() {
	string napis = "adam";
	char znak = 'a';
	int wynik = 2;

	assert(policzZnakV1(napis, znak) == wynik);
}

int main() {
	test1();
	return 0;
}
