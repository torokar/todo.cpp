/* �������� ������������� ������� �� ����� �++
* ���������� ��������� "���������� ������� �����"
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
	// ����� ������� ������������ ��������� 
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

	// ����� ��������� 
	switch (input) {
	case '1':
		print("�������� ����� ������.");
		if (isNew != false) { // �������� ���������� �����. ������������ ��� �������� �������� 
			cout << "������� ��� �����. " << endl;
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
			cout << "���� �� ������. " << endl;
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
