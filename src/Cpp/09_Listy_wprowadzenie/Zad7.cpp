#include <vector>
#include <cassert>
#include <limits>
#include <iostream>

using namespace std;

//Dla otrzymanej listy znajdz liczbe mniejsza 
//od najwiekszej liczby z listy i jednoczesnie 
//wieksza od wszystkich pozostalych.
double wieksza(vector<int>& lista) {

	assert(!lista.empty());

	if (lista.size() == 1)
		return lista.front() - 1;

	int maks = numeric_limits<int>::min();
	int maks2 = numeric_limits<int>::min();

	for (auto liczba : lista) {

		if (liczba > maks) {
			maks2 = maks;
			maks = liczba;
		}

		else if (liczba > maks2)
			maks2 = liczba;
	}

	return (maks + maks2)/2.00;
}

int main() {

    	vector<int> lista({3, 5, -7, 4, 9, -11, 2});
    	cout << wieksza(lista) << endl;
    	
    	lista = {3, -2, 4, 9, -3, -40, 8, 5, -7, -1};
    	cout << wieksza(lista) << endl;
    	
	return 0;
}
