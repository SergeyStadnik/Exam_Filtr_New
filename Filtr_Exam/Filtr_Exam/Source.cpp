#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

void DellSymbol(string& text, string dell,string& newText)
{
	for (size_t i = 0; i < text.length(); i++)
	{
		for (size_t j = 0; j < dell.length(); j++)
		{
			if (text[i] == dell[j])
			{
				newText += ' ';
				break;
			}
			else if (j == dell.length() - 1)
				newText += text[i];
		}
	}
	text = "";
	text = newText;
	cout << "_________________����� �����__________________________________" << endl;
	cout << newText << endl;
	cout << "______________________________________________________________" << endl;
	newText = "";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	srand(time(NULL));
	string text1;
	string* t1;
	t1 = &text1;
	string dellRu;
	string dellEn;
	string dellNumb;
	string dellPlant;
	string text2;
	string* t2;
	int x=0;
	t2 = &text2;
	cout << "������� ����� ������� ������, �������������" << endl;
	getline(cin, text1);
	cout << "������� ������ ��������" << endl;
	getline(cin, dellRu);
	cout << "������� ������ ��������" << endl;
	getline(cin, dellEn);
	cout << "������� ������ ����" << endl;
	getline(cin, dellNumb);
	cout << "������� ������ ������������" << endl;
	getline(cin, dellPlant);
	
	for (size_t i = 0; i < 100; i++)
	{
		cout << "___________________��� �����_____________________________" << endl;
		cout << text1 << endl;
		cout << "___________________������� ��������_____________________________" << endl;
		cout << "(1)�������� "<<dellRu <<"(2)��������: "<<dellEn<< endl;
		cout << "(3)����� " << dellNumb << "(4)�����������: " << dellPlant << endl;
		cout << "������� ����� ������� ������� ������ ��������" << endl;
		cout << "��� ������� 5 ���� ������ ����� �� ���������" << endl;
		cin >> x;
		switch (x)
		{
		case (1):
		{
           DellSymbol(*t1, dellRu, *t2);
		   break;
		}
		case (2):
		{
			DellSymbol(*t1, dellEn, *t2);
			break;
		}
		case (3):
		{
			DellSymbol(*t1, dellNumb, *t2);
			break;
		}
		case (4):
		{
			DellSymbol(*t1, dellPlant, *t2);
			break;
		}
		case (5):
		{
			i = 100;
			break;
		}
		default:
			break;
		}

	}
	
	cout << text2;
	system("pause");
	return 0;
}