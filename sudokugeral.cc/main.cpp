#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

//Função que verifica se o conjunto não possui numeros repetidos
int Verificar(string vet[]) {
	int i1, i2;
	string temp;
	for (i1 = 0; i1 < 9; i1++) {
		temp = vet[i1];
		for (i2 = 0; i2 < 9; i2++) {
			if (i1 != i2 && temp == vet[i2] && vet[i1].compare("0")!=0 ) {
				return 1;
			}
		}
	}
	return 0;
}

int LCN (string M[9][9]) {
	string m[9];
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
		cout << "Sudoku Invalido!" << '\n';
		return 0;
	} else {
		cout << "Sudoku Valido!" << '\n';
		return 1;
	}
	cout << '\n';

	return 0;
}

int main() {
	string M[9][9];
	int i, j;
	ifstream inputFile("input4.txt");

	if (inputFile.is_open()) {
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				inputFile >> M[i][j];
				cout << M[i][j] << " ";
			}
			cout << '\n';
		}
		inputFile.close();
	} else {
		cout << "Error opening file!";
		return 1;
	}
	LCN (M);

	return 0;
}
