#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


int Verificar(int vet[9]) {
	int i1, i2;
	int temp;
	for (i1 = 0; i1 < 9; i1++) {
		temp = vet[i1];
		for (i2 = 0; i2 < 9; i2++) {
			if (i1 != i2 && temp == vet[i2] && vet[i1]!=0 ) {
				return 1;
			}
		}
	}
	return 0;
}

int LCN (int M[9][9]) {
	int m[9];
	int i, j, n;
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
		return 0;
	} else {
		return 1;
	}
	cout << '\n';

	return 0;
}

int SUB (int temp[9][9], int i, int j, int r) {
	int v = 0;
	temp[i][j] = r;
	v = LCN(temp); 
	while(v!=1) {
	    temp[i][j] = r;
	    if(LCN(temp)){
	        break;
	    }
		r++;
	}
	return r;
}

int main() {
	int M[9][9], temp[9][9];
	int i, j;
	ifstream inputFile("input2.txt");

	cout << "SUDOKU inicial:" << '\n';
	if (inputFile.is_open()) {
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				inputFile >> M[i][j];
				temp[i][j] = M[i][j];
				cout << M[i][j] << " ";
			}
			cout << '\n';
		}
		inputFile.close();
	} else {
		cout << "Error opening file!";
		return 1;
	}
	//imprimi quais a células modificadas e qual valor elas receberam
	cout << "Mudancas:" << '\n';
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (M[i][j]==0) {
				M[i][j] = SUB(temp, i, j, 1);
				cout << "Linha: " << i+1 << " Coluna: " << j+1 << " Numero: " << M[i][j] << '\n';
			}
		}
	}
	cout << "SUDOKU final:" << '\n';
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cout << M[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}
