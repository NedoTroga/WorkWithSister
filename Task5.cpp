﻿// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 0;
	int limit = 0;
	int count = 0;
	int DaysBefore = 0;

	cin >> n;
	vector <int> can(n);
	vector <int> must(n);
	vector <int> answer;

	for (int i = 0; i < n; i++) {
		cin >> can[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> must[i];
	}
	for (int i = 0; i < n; i++) {
		if ((DaysBefore == 0) && (can[i] >= must[i]) && (limit <= 0)) {
			count++;
			answer.push_back(i + 1);
			DaysBefore++;
		}
		else if ((DaysBefore == 1) && (limit <= 0) && (can[i] >= 2 * must[i])) {
			count++;
			answer.push_back(i + 1);
			DaysBefore++;
		}
		else {
			limit = DaysBefore;
			DaysBefore = 0;
		}
		limit--;
	}
	cout << count << " ";
	for (int i = 0; i < count; i++) {
		cout << answer[i] << " ";
	}
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
