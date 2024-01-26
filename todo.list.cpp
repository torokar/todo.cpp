/* �������� ������������� ������� �� ����� �++
* ���������� ��������� "���������� ������� �����"
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

	// ����� ������� ������������ ���������; 
	print("      ���������� ��������");
	print("\n");
	print("   �������� ������ ��� ��������.");
	print("\n");
	print("   1. C������� ����� ������. ");
	print("   2. �������� ������. ");
	print("   3. �������� ������. ");
	print("   4. ��������  �����. ");
	print("   5. �������� �����. ");
	print("   6. ��������� ������ �� ������. ");
	cout << ("   ������� ������ ��� ��������. ");

	cin >> input;
	cin.ignore();

	// ����� ��������� 
	switch (input) {
	case '1':
		print("�������� ����� ������.");

		if (isNew != false) { // �������� ���������� �����. ������������ ��� �������� �������� 

			print("������� ��� �����. ");

			string fileName;
			getline(cin, fileName);
			fileName += ".txt";
			ofstream fileName("D:\\C++\\������ ������� ������\\todo.cpp\\������.txt");
			print("���� ������. ");

			ofstream save(fileName, ios_base::out);
			print("������� ��� �����. ");
			getline(cin, text);
			
			if (save.is_open()) {
				save << text;
				
				save.close();
				print("���� ������. ");
			}
		}
		else {
			print("���� �� ������. ");
		}
		break;
	case '2':
		print("2. �������� ������. ");
		

		break;
	case '3':
		print("3. �������� �����. ");
		break;
	case '4':
		print("4. ��������  �����. ");
		break;
	case '5':
		print("5. �������� �����. ");
		break;
	case '6':
		print("6. ��������� ������ �� ������. ");
		break;
	default:
		print("������ ��������� ���.");
		break;
	}
	return 0;
}
