﻿// ConsoleApplication14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void Swap(int &a, int &b) {
	int buffer;
	buffer = a;
	a = b;
	b = buffer;
}
int main()
{

	int n = 0;
	int m = 0;
	cin >> n;
	cin >> m;

	vector <int> a(n);
	vector <int> b(m);
	vector <int> c;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int CountA = 0;
	int CountB = 0;
	while ((CountA < n) && (CountB < m))  {
		if (a[CountA] < b[CountB]) {
			c.push_back(a[CountA]);
			CountA++;
		}
		else {
			c.push_back(b[CountB]);
			CountB++;
		}
	}
	if (CountA < n) {
		while (CountA < n) {
			c.push_back(a[CountA]);
			CountA++;
		}
	}
	else {
		while (CountB < m) {
			c.push_back(a[CountB]);
			CountB++;
		}
	}
	for (int i = 0; i < (n + m); i++) {
		cout << c[i] << " ";
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
