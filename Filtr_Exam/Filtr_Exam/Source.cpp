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
	
	cout << "_________________Новый текст__________________________________" << endl;
	cout << newText << endl;
	cout << "______________________________________________________________" << endl<<endl<<endl<<endl;
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
	string dell;
	string text2;
	string* t2;
	int x=0;
	t2 = &text2;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
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
		cout << "(1)Кирилица "<<dellRu <<endl<<"(2)Латиница: "<<dellEn<< endl;
		cout << "(3)Цифры " << dellNumb <<endl<< "(4)Спецсимволы: " << dellPlant << endl;
		cout << "Нажмите номер шаблона который хотите добавить" << endl;
		cout << "Или нажмите 5 если хотите выйти из программы" << endl;

		cin >> x;
		if (x > 5)
		{
			cout << "Неправильный ввод,повторите пожалуйста" << endl;
			cin >> x;
		}
		switch (x)
		{
		case (1):
		{  sum1++;
		if (sum1 == 2)
		{
			cout << "__________ВНИМАНИЕ_______________"<<endl<<"Шаблон отключен" << endl;
			sum1 = 0;
		  }
			
		   break;
		}
		case (2):
		{   sum2++;
		if (sum2 == 2)
		{
			cout << "__________ВНИМАНИЕ_______________" << endl << "Шаблон отключен" << endl;
			sum2 = 0;
		}
			break;
		}
		case (3):
		{   sum3++;
		if (sum3 == 2)
		{
			cout << "__________ВНИМАНИЕ_______________" << endl << "Шаблон отключен" << endl;
			sum3 = 0;
		}
			break;
		}
		case (4):
		{   sum4++;
		if (sum4 == 2)
		{
			cout << "__________ВНИМАНИЕ_______________" << endl << "Шаблон отключен" << endl;
			sum4= 0;
		}
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
		if (sum1 == 1 && sum2 == 0 && sum3 == 0 && sum4 == 0)
		{
			dell = " ";
			dell += dellRu;
		}
		if (sum1 == 1 && sum2 == 1 && sum3 == 0 && sum4 == 0)
		{
			dell = " ";
			dell += dellRu + dellEn;
		}
		if (sum1 == 1 && sum2 == 1 && sum3 == 1 && sum4 == 0)
		{
			dell = " ";
			dell += dellRu + dellEn + dellNumb;
		}
		if (sum1 == 1 && sum2 == 1 && sum3 == 1 && sum4 == 1)
		{
			dell = " ";
			dell += dellRu + dellEn + dellPlant + dellNumb;
		}
        if (sum1 == 0 && sum2 == 1 && sum3 == 1 && sum4 == 1)
		{
			dell = " ";
			dell += dellPlant + dellEn + dellNumb;
		}

		if (sum1 == 0 && sum2 == 0 && sum3 == 1 && sum4 == 1)
		{
			dell = " ";
			dell += dellNumb + dellPlant;
		}
		if (sum1 == 0 && sum2 == 0 && sum3 == 0 && sum4 == 1)
		{
			dell = " ";
			dell += dellPlant;
		}
		
		if (sum1 == 1 && sum2 == 0 && sum3 == 1 && sum4 == 1)
		{
			dell = " ";
			dell += dellRu +  dellPlant + dellNumb ;
		}
		if (sum1 == 1 && sum2 == 1 && sum3 == 0 && sum4 == 1)
		{
			dell = " ";
			dell += dellRu + dellPlant + dellEn;
		}
		if (sum1 == 0 && sum2 == 0 && sum3 == 1 && sum4 == 0)
		{
			dell = " ";
			dell += dellNumb;
		}
		if (sum1 == 0 && sum2 == 1 && sum3 == 0 && sum4 == 0)
		{
			dell = " ";
			dell += dellEn;
		}
		if (sum1 == 0 && sum2 == 0 && sum3 == 0 && sum4 == 0)
		{
			dell = " ";
			
		}
		if (sum1 == 0 && sum2 == 1 && sum3 == 1 && sum4 == 0)
		{
			dell = " ";
			dell += dellEn + dellNumb;
		}
		if (sum1 == 1 && sum2 == 1 && sum3 == 0 && sum4 == 1)
		{
			dell = " ";
			dell += dellRu + dellPlant;
		}
		if (sum1 == 0 && sum2 == 1 && sum3 == 0 && sum4 == 1)
		{
			dell = " ";
			dell += dellEn + dellPlant;
		}
		if (sum1 == 1 && sum2 == 0 && sum3 == 1 && sum4 == 0)
		{
			dell = " ";
			dell += dellRu + dellNumb;
		}
		DellSymbol(*t1, dell, *t2);
		cout << "Чтобы продолжить нажмите любую цифру" << endl;
		/*cin >> x;
		system("cls");*/
	}
	
	cout << text2;

	return 0;
}