/* Создание студенческого проекта на языке С++
* Консольная программа "Управления списком задач"
*/

#include <iostream>
#include <string>
#include <fstream>
#include "windows.h"

using namespace std;

void print(string word) {
	cout << word << endl;
}
bool isTextFile(const string& Ndoc) {

	string txtfile = Ndoc.substr(Ndoc.find_last_of('.') + 1);
	return (txtfile == "txt");
}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char input;
	bool isNew = true;
	string text;

	// Выбор нужного пользователю параметра; 
	print("      Консольный задачник");
	print("\n");
	print("   Выберите нужный вам параметр.");
	print("\n");
	print("   1. Cоздание новой задачи. ");
	print("   2. Обновить задачу. ");
	print("   3. Удаления задачи. ");
	print("   4. Просмотр  задач. ");
	print("   5. Просмотр задач. ");
	print("   6. Поставить пароль на задачу. ");
	cout << ("   Введите нужный вам параметр. ");

	cin >> input;
	cin.ignore();

	// Выбор параметра 
	switch (input) {
	case '1':
		print("Создание новой задачи.");

		if (isNew != false) { // Создание текстового файла. пользователь сам выбирает название 

			print("Введите имя файла. ");

			string fileName;
			getline(cin, fileName);
			fileName += ".txt";
			ofstream fileName("D:\\C++\\ИРНИТУ учебные работы\\todo.cpp\\задачи.txt");
			print("Файл открыт. ");

			ofstream save(fileName, ios_base::out);
			print("Введите ваш текст. ");
			getline(cin, text);
			
			if (save.is_open()) {
				save << text;
				
				save.close();
				print("Файл закрыт. ");
			}
		}
		else {
			print("Файл не создан. ");
		}
		break;
	case '2':
		print("2. Обновить задачу. ");
		

		break;
	case '3':
		print("3. Удаления задач. ");
		break;
	case '4':
		print("4. Просмотр  задач. ");
		break;
	case '5':
		print("5. Просмотр задач. ");
		break;
	case '6':
		print("6. Поставить пароль на задачу. ");
		break;
	default:
		print("Такого параметра нет.");
		break;
	}
	return 0;
}
