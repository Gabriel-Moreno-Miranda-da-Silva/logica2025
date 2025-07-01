#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int Verificar(char vet[]) {
	int i1, i2;
	char temp;
	for (i1 = 0; i1 < 9; i1++) {
		temp = vet[i1];
		for (i2 = 0; i2 < 9; i2++) {
			if (i1 != i2 && temp == vet[i2] && vet[i1] != '0') {
				return 1;
			}
		}
	}
	return 0;
}

int LCN (char M[9][9]) {
	char m[9];
	int i, j, n, temp;
	int valido;

	valido = 1;

	//Verificar Todas as linhas
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			m[j] = M[i][j];
		}
		if (Verificar(m)) {
			valido = 0;
		}
	}

	//Verificar Todas as Colunas
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9; i++) {
			m[i] = M[i][j];
		}
		if (Verificar(m)) {
			valido = 0;
		}
	}

	//Verificar Todas as Matrizes 3x3
	for (int lin = 0; lin < 9; lin += 3) {
		for (int col = 0; col < 9; col += 3) {
			int k = 0;
			for (i = lin; i < lin + 3; i++) {
				for (j = col; j < col + 3; j++,k++) {
					m[k] = M[i][j];
				}
			}
			if (Verificar(m)) {
				valido = 0;
			}
		}
	}
	if (valido == 0) {
		cout << "Jogada invalida! tente novamente." << '\n';
		return 0;
	} else {
		cout << "Jogada valida! faca uma nova jogada." << '\n';
		return 1;
	}
	cout << '\n';

	return 0;
}

int main() {
	char M[9][9];
	char temp[9][9];
	int i, j;
	int valido, zeros;
	int a, b;
	char c;
	ifstream inputFile("input2.txt");

	if (inputFile.is_open()) {
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				inputFile >> M[i][j];
				temp[i][j] = M[i][j];
			}
		}
		inputFile.close();
	} else {
		cout << "Error opening file!";
		return 1;
	}

	int acabar = 0;
	while (acabar != 1) {
	    zeros = 0;
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				if(M[i][j]=='0') {
					zeros++;
				}
			}
		}


		cout << " |SUDOKU-|-------|-------|" << '\n';
		for (int u = 0; u < 3; u++) {
			for (i = 0; i < 3; i++) {
				cout << " |";
				for (j = 0; j < 3; j++) {
					for (int k = 0; k < 3; k++) {
						if (M[i+u*3][k+j*3] == '0') {
							cout << "  " ;
						}
						else {
							cout << " " << M[i+u*3][k+j*3];
						}
					}
					cout << " |";
				}
				cout << '\n';

			}
			cout << " |";
			for (j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					cout << "--";
				}
				cout << "-|";
			}
			cout << '\n';
		}
		cout << "Digite a sua Jogada (linha coluna numero): ";
		cin >> a >> b >> c;
		temp[a-1][b-1] = c;
		if(LCN(temp)==1) {
			M[a-1][b-1] = c;
		} else {
		    temp[a-1][b-1] = M[a-1][b-1];
		}
		if (zeros == 0) {
			acabar = 1;
		}

	}
	cout << "Parabens, voce conseguiu resolver o SUDOKU!";

	return 0;
}
