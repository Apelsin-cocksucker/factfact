﻿// factfact.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "factHeader.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string answ;
	cout << "Уважаемый Пользователь, премного благодарен за использование данной программы по подсчёту факториалов. ";
	do
	{
		answ=Input();
		if (answ == "n" || answ == "N") break;
		cout <<"\nФакториал факториала вашего числа равен ";
		print(FactFact(VectorFill(answ)));
		cout << '\n';
	} while (true);
	cout << "До новых встреч!";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
