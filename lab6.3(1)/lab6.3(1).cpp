// lab6.3(1).cpp 
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Сацик Вікторія
//17 варіант
#include <iostream>
using namespace std;
void Input(int* a, const int size) {
	for
		(int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = "
			;

		cin >> a[i];
	}
	cout << endl;
}
int main() {
	const int n = 5;
	int a[n];
	Input(a, n);
	return 0;
}