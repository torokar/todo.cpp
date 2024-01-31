/* Создание студенческого проекта на языке С++
* Консольная программа "Управления списком задач"
*/



//Реализация данной программы отложена из-за появляющихся багов 
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <windows.h>
//
//
//using namespace std;
//
//void print(string word) {
//	cout << word << endl;
//}
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char input;
//	string text;
//
//	// Выбор нужного пользователю параметра; 
//	print("      Консольный задачник");
//	print("\n");
//	print("   Выберите нужный вам параметр.");
//	print("\n");
//	print("   1. Cоздание новой задачи. ");
//	print("   2. Изменить задачу. ");
//	print("   3. Просмотр  задач. ");
//	print("   4. Удаления задачи. ");
//	cout << ("   Введите нужный вам параметр. ");
//
//	cin >> input;
//	cin.ignore();
//
//	// Выбор параметра 
//	switch (input) {
//	case '1':
//		print("Создание новой задачи.");
//
//		if (true) { // Создание текстового файла. пользователь сам выбирает название 
//
//			print("Введите имя файла. ");
//
//			string  taskFolderPath = "D:\\C++\\ИРНИТУ учебные работы\\todo.cpp\\задачи";
//			string fileName;
//
//			getline(cin, fileName);
//
//			string filePath = taskFolderPath + "\\" + fileName + ".txt";
//			ofstream save(filePath, ios_base::out);
//
//			print("Файл открыт. ");
//			print("Введите ваш текст. ");
//
//			getline(cin, text);
//
//			if (save.is_open()) {
//
//				save << text;
//				
//				save.close();
//
//				print("Файл закрыт. ");
//			}
//		}
//		else {
//			print("Файл не создан. ");
//		}
//		break;
//	case '2':
//		print("2. Обновить задачу. ");
//		
//
//		break;
//	case '3':
//		print("3. Просмотр задач. ");
///*		ifstream file(taskFolderPath + "\\somefile.txt", ios::in);
//		string linebuff;
//		while (getline(file, linebuff))
//			cout << linebuff << endl;
//		file.close();
//	*/	
//		string folderPath = "D:\\C++\\ИРНИТУ учебные работы\\todo.cpp\\задачи";
//		ifstream file;
//		file.exceptions(ifstream::badbit | ifstream::failbit);
//		try {
//			file.open((folderPath + "\\somefile.txt").c_str(), ios::in);
//			if (file.is_open()) {
//				string line 
//					while (getline(file, line)) {
//
//					}
//			}
//		}
//		break;
//	case '4':
//		print("4. Удаление задач. ");
//		
//		break;
//	case '5':
//		print("5. Просмотр задач. ");
//		break;
//	case '6':
//		print("6. Поставить пароль на задачу. ");
//		break;
//	default:
//		print("Такого параметра нет.");
//		break;
//	}
//	return 0;
//}
