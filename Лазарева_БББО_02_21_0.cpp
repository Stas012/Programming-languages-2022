#include <iostream>
#include <Windows.h>
using namespace std;

struct Student
{
	int math;
	int physics;
	int sopromat;
	int plotting;
	int chemistry;
	char surname[20];
	char name[20];
	char second_name[20];
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N;
	cout << "Введите количество стуентов > " << endl;
	cin >> N;
	cin.clear();
	_flushall();
	Student students[N];
	for (int i = 0; i < N; i++) {
		cout << "Студент номер " << i + 1 << ": " << endl;

		cout << "Фамилия" << endl;
		cin.getline(students[i].surname, 20);
		cin.clear();
		_flushall();

		cout << "Имя" << endl;
		cin.getline(students[i].name, 20);
		cin.clear();
		_flushall();

		cout << "Отчество" << endl;
		cin.getline(students[i].second_name, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по математике" << endl;
		cin.getline(students[i].math, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по физике" << endl;
		cin.getline(students[i].physics, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по черчению" << endl;
		cin.getline(students[i].plotting, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по химии" << endl;
		cin.getline(students[i].chemistry, 20);
		cin.clear();
		_flushall();

		cout << "Оценка по сопромату" << endl;
		cin.getline(students[i].sopromat, 20);
		cin.clear();
		_flushall();
	}

	int c = 0;
	for (int i = 0; i < N; i++) {
		if (students[i].math == 2) {
			c++;
		}
	}

	cout << c << "столько студентов имею неудолетворительную оценку по математике" << endl;
	return 0;
}
