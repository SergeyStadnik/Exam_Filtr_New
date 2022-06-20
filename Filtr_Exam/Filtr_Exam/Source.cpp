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
	cout << "_________________Новый текст__________________________________" << endl;
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
	cout << "Введите текст который будете, редактировать" << endl;
	getline(cin, text1);
	cout << "Введите фильтр кирилицы" << endl;
	getline(cin, dellRu);
	cout << "Введите фильтр латиницы" << endl;
	getline(cin, dellEn);
	cout << "Введите фильтр цифр" << endl;
	getline(cin, dellNumb);
	cout << "Введите фильтр спецсимволов" << endl;
	getline(cin, dellPlant);
	
	for (size_t i = 0; i < 100; i++)
	{
		cout << "___________________Ваш текст_____________________________" << endl;
		cout << text1 << endl;
		cout << "___________________Шаблоны удалений_____________________________" << endl;
		cout << "(1)Кирилица "<<dellRu <<"(2)Латиница: "<<dellEn<< endl;
		cout << "(3)Цифры " << dellNumb << "(4)Спецсимволы: " << dellPlant << endl;
		cout << "Нажмите номер шаблана который хотите добавить" << endl;
		cout << "Или нажмите 5 если хотите выйти из программы" << endl;
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