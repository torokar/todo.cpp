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
void print(int number) {
	cout << number << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	char input;
	bool isNew = true;

	print("����� ������ �� ������ ��������?");
	print("�������� ������ ��� ��������.");
	print("1. C������� ����� ������. ");
	print("2. �������� ������. ");
	print("3. �������� ������. ");
	print("4. ��������  �����. ");
	cout << ("������� ������ ��� ��������. ");
	cin >> input;

	// ����� ��������� 
	switch (input) {
	case '1':
		print("�������� ����� ������.");
		if (isNew != false) {
			;
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
