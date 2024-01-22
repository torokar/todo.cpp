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
	cout << ("   ������� ������ ��� ��������. ");
	cin >> input;
	cin.ignore();

	// ����� ��������� 
	switch (input) {
	case '1':
		print("�������� ����� ������.");
		if (isNew != false) { // �������� ���������� �����. ������������ ��� �������� �������� 
			cout << "������� ��� �����. " << endl;
			cin >> text 
			string fileName;
			getline(cin, fileName);
			fileName += ".txt";
			ofstream save(fileName, ios_base::out);
			//����� ��� ������� ����� ���������� � ��������� �������� ������ ������������!!! 
			if (save.is_open()) {
				print("���� ������. ");
				print("������� ��� �����. ");
				fileName >> text;
				save.close();
				print("������ �������. ");
			}
		}
		else {
			print("���� �� ������. ");
		}

		break;
	case '2':
		print("2. �������� �����. ");
		break;
	case '3':
		print("3. �������� �����. ");
		break;
	case '4':
		print("4. ��������  �����. ");
		break;
	default:
		print("������ ��������� ���.");
		break;
	}

 
	return 0;
}
