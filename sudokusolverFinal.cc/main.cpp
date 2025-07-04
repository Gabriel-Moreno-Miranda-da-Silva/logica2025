#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/* como fazer a funcao:
faça duas funções recursivas, uma que verifica o primeiro 0 que aparecer e preenche ele com
o primeiro numero possível na forma crescente, após isso ela chama para o proximo 0, repetindo
esse padrao ate chegar ao ultimo 0. chegando nele verifica o proximo numero crescente no lugar
do ultimo 0, voltando em todas os casos realizando essa operacao.
*/

//FunC'C#o que verifica se o conjunto nC#o possui numeros repetidos
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
	//retorna 0 se valido e 1 se invalido
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
	//retorn 0 se valido e 1 se nao valido
	if (valido == 0) {
		return 0;
	} else {
		return 1;
	}
	cout << '\n';

	return 0;
}
//FunC'C#o que preenche os espaC'os vazios (numero "0")
int SUB (int temp[9][9], int i, int j, int r) {
	temp[i][j] = r;
	if(LCN(temp)==0) {
		r = SUB(temp,i,j,r+1);
	}
	return r;
}

int principal (M[9][9]){
    while(int T!=1){
        
    }
}

int VerifCasos (int M[9][9], temp[9][9], r ) {
    for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (M[i][j]==0) {
				M[i][j] = SUB(temp, i, j, r+1);
			}
		}
	}
	if(LCN(temp)==0) {
		r = SUB(temp,i,j,r+1);
	}
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
	for (int j = 0; j < 9; j++) {
		for (int k = 0; k < 9; k++) {
			VerifCasos (M,temp, 0);
		}
	}


	return 0;
}