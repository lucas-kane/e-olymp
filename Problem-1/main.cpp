/*
Поста задача?
	Програма зчитує двоцифрове число і виводить через пропуск кожну цифру окремо.
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// Перевіряємо чи знаходиться натуральне число на проміжку від 10 до 99 включно.
	if (10 <= n && n <= 99) {
		// Виводимо спочатку першу цифру числа і через пропуск другу
		cout << n / 10 << ' ' << n % 10 << endl;
	}

	system("PAUSE");
	return 0;
}
