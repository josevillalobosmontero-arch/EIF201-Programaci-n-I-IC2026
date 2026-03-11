#include <iostream>
using namespace std;

void imprimirTodo(int* arr, int n) {
	for (int i = 1; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int encontrarMaximo(int* arr, int n) {
	int max = *arr;
	for (int i = 1; i < n; i++) {
		if ((*(arr + i)) > max) {
			max = (*(arr + i));
		}
	}
	return max;
}
void invertir(int* arr, int n) {
	int* inisio = arr;
	int* fin = arr + n - 1;
	while (inisio < fin) {
		int temp = *inisio;
		*inisio = *fin;
		*fin = temp;
		inisio++;
		fin--;
	}
}

int main() {
	int data[6] = { 10,30,50,20,40,60 };
	imprimirTodo(data, 6);
	cout << encontrarMaximo(data, 6) << endl;
	invertir(data, 6);
	imprimirTodo(data, 6);
	return 0;


}