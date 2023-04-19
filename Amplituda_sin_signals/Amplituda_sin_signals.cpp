#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const double PI = 3.14159265358979323846; //Значение числа Пи

	double amplitude, frequency, phase, time; //Переменные для амплитуды, частоты, фазы и времени
	double signal; //Переменная для хранения значения сигнала

	cout << "Введите амплитуду, частоту, фазу и время сигнала: ";
	cin >> amplitude >> frequency >> phase >> time;

	signal = amplitude * sin(2 * PI * frequency * time + phase); //Формула расчета синусоидального сигнала

	cout << "Амплитуда сигнала: " << abs(signal) << endl; //Вывод значения модуля сигнала (амплитуды)

	return 0;

}