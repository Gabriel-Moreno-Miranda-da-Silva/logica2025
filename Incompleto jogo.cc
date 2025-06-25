// a fazer:
// arrumar int verificar para pular espaços em branco
// fazer 0 na matriz se tornar espaços, no inicio de int main
// output pra saber se a matriz foi completa
// boa sorte


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int Verificar(char vet[]) {
	int i1, i2;
	char temp;
	for (i1 = 0; i1 < 9; i1++) {
		temp = vet[i1];
		for (i2 = 0; i2 < 9; i2++) {
			if (i1 != i2 && temp == vet[i2]) {
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

	cin >> n;
	for (int N = 0; N < n; N++) { //ler a matriz
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
		} else {
			cout << "Jogada valida! faça uma nova jogada." << '\n';
		}
		cout << '\n';
	}
}

int main(int argc, char *argv[]) {
	char M[9][9];
	int i, j;
	int valido;
	int a, b, c;
	ifstream inputFile("input2.txt");

	if (inputFile.is_open()) { // Always check if the file opened successfully
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				if (!(arquivoEntrada >> M[i][j])) {
                    cout << "Erro ao ler o elemento na posição [" << i << "][" << j << "]";
                    return 1;
                }
			}
		}
		inputFile.close();
	} else {
		cout << "Error opening file!";
		return 1;
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> M[i][j];
		}
	}
	while (int acabar != 1) {

		cout << " |SUDOKU-|-------|-------|" << '\n';
		for (int u = 0; u < 3; u++) {
			for (i = 0; i < 3; i++) {
				cout << " |";
				for (j = 0; j < 3; j++) {
					for (int k = 0; k < 3; k++) {
						cout << " " << M[i][k+j*3];
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
		cout << "Digite a sua Jogada (linha coluna numero): [";
		cin >> a;
		cout << "] [";
		cin >> b;
		cout << "] [";
		cin >> c;
		cout << "]" << '\n'
        
        valido = LCN (a,b,c);

	}

	return 0;
}
