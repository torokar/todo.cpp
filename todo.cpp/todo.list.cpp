/* Создание студенческого проекта на языке С++
* Консольная программа "Управления списком задач"
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void print(string word) {
	cout << word << endl;
}
void print(int number) {
	cout << number << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	char input;
	bool isNew = true;

	print("Какую задачу вы хотите добавить?");
	print("Выберите нужный вам параметр.");
	print("1. Cоздание новой задачи. ");
	print("2. Обновить задачу. ");
	print("3. Удаления задачи. ");
	print("4. Просмотр  задач. ");
	cout << ("Введите нужный вам параметр. ");
	cin >> input;

	// Выбор параметра 
	switch (input) {
	case '1':
		print("Создание новой задачи.");
		if (isNew != false) {
			;
		}
		break;
	case '2':
		print("2. Обновить задач. ");
		break;
	case '3':
		print("3. Удаления задач. ");
		break;
	case '4':
		print("4. Просмотр  задач. ");
		break;
	default:
		print("Такого параметра нет.");
		break;
	}

 
	return 0;
}
