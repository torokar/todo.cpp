/* �������� ������������� ������� �� ����� �++
* ���������� ��������� "���������� ������� �����"
*/



//���������� ������ ��������� �������� ��-�� ������������ ����� 
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
//	// ����� ������� ������������ ���������; 
//	print("      ���������� ��������");
//	print("\n");
//	print("   �������� ������ ��� ��������.");
//	print("\n");
//	print("   1. C������� ����� ������. ");
//	print("   2. �������� ������. ");
//	print("   3. ��������  �����. ");
//	print("   4. �������� ������. ");
//	cout << ("   ������� ������ ��� ��������. ");
//
//	cin >> input;
//	cin.ignore();
//
//	// ����� ��������� 
//	switch (input) {
//	case '1':
//		print("�������� ����� ������.");
//
//		if (true) { // �������� ���������� �����. ������������ ��� �������� �������� 
//
//			print("������� ��� �����. ");
//
//			string  taskFolderPath = "D:\\C++\\������ ������� ������\\todo.cpp\\������";
//			string fileName;
//
//			getline(cin, fileName);
//
//			string filePath = taskFolderPath + "\\" + fileName + ".txt";
//			ofstream save(filePath, ios_base::out);
//
//			print("���� ������. ");
//			print("������� ��� �����. ");
//
//			getline(cin, text);
//
//			if (save.is_open()) {
//
//				save << text;
//				
//				save.close();
//
//				print("���� ������. ");
//			}
//		}
//		else {
//			print("���� �� ������. ");
//		}
//		break;
//	case '2':
//		print("2. �������� ������. ");
//		
//
//		break;
//	case '3':
//		print("3. �������� �����. ");
///*		ifstream file(taskFolderPath + "\\somefile.txt", ios::in);
//		string linebuff;
//		while (getline(file, linebuff))
//			cout << linebuff << endl;
//		file.close();
//	*/	
//		string folderPath = "D:\\C++\\������ ������� ������\\todo.cpp\\������";
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
//		print("4. �������� �����. ");
//		
//		break;
//	case '5':
//		print("5. �������� �����. ");
//		break;
//	case '6':
//		print("6. ��������� ������ �� ������. ");
//		break;
//	default:
//		print("������ ��������� ���.");
//		break;
//	}
//	return 0;
//}
