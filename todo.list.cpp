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

int main() {
	setlocale(LC_ALL, "Russia");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char input;
	bool isNew = true;
	// Выбор нужного пользователю параметра 
	print("      Консольный задачник");
	print("\n");
	print("   Выберите нужный вам параметр.");
	print("\n");
	print("   1. Cоздание новой задачи. ");
	print("   2. Обновить задачу. ");
	print("   3. Удаления задачи. ");
	print("   4. Просмотр  задач. ");
	cout << ("   Введите нужный вам параметр. ");
	cin >> input;

	// Выбор параметра 
	switch (input) {
	case '1':
		print("Создание новой задачи.");
		if (isNew != false) { // Создание текстового файла. пользователь сам выбирает название 
			cout << "Введите имя файла. " << endl;
			string fileName;
			cin >> fileName;
			fileName += ".txt";
			ofstream save(fileName, ios_base::out);
			if (save.is_open()) {
				cout << "file is open";
				save.close();
			}
		}
		else {
			cout << "Файл не создан. " << endl;
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
