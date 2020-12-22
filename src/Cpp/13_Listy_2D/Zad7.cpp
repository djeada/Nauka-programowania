#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

/*
Otrzymujesz liste 2d. Jesli element macierzy jest 
rowny zero, zamien wszystkie elementy w tej samej 
kolumnie i tym samym wierszu na zera.
*/

void wyzerujV1(vector<vector<int>>& macierz) {

	if (macierz.empty())
		return;

	int M = macierz.size();
	int N = macierz[0].size();

	int wiersze[M] = {0};
	int kolumny[N] = {0};

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (macierz[i][j] == 0) {
				wiersze[i] = 1;
				kolumny[j] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (wiersze[i] == 1 || kolumny[j] == 1)
				macierz[i][j] = 0;
		}
	}
}

int main() {

	vector<vector<int>> macierz { { 1, 2, 3 },
                                { 4, 0, 6 },
								{ 7, 8, 9} };
	
	vector<vector<int>> wynik { { 1, 0, 3 },
                                { 0, 0, 0 },
								{ 7, 0, 9} };

	wyzerujV1(macierz);

	assert(macierz == wynik);

	return 0;	 	
}