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
	
	cout << "_________________����� �����__________________________________" << endl;
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
		cout << "(1)�������� "<<dellRu <<endl<<"(2)��������: "<<dellEn<< endl;
		cout << "(3)����� " << dellNumb <<endl<< "(4)�����������: " << dellPlant << endl;
		cout << "������� ����� ������� ������� ������ ��������" << endl;
		cout << "��� ������� 5 ���� ������ ����� �� ���������" << endl;

		cin >> x;
		if (x > 5)
		{
			cout << "������������ ����,��������� ����������" << endl;
			cin >> x;
		}
		switch (x)
		{
		case (1):
		{  sum1++;
		if (sum1 == 2)
		{
			cout << "__________��������_______________"<<endl<<"������ ��������" << endl;
			sum1 = 0;
		  }
			
		   break;
		}
		case (2):
		{   sum2++;
		if (sum2 == 2)
		{
			cout << "__________��������_______________" << endl << "������ ��������" << endl;
			sum2 = 0;
		}
			break;
		}
		case (3):
		{   sum3++;
		if (sum3 == 2)
		{
			cout << "__________��������_______________" << endl << "������ ��������" << endl;
			sum3 = 0;
		}
			break;
		}
		case (4):
		{   sum4++;
		if (sum4 == 2)
		{
			cout << "__________��������_______________" << endl << "������ ��������" << endl;
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
		cout << "����� ���������� ������� ����� �����" << endl;
		/*cin >> x;
		system("cls");*/
	}
	
	cout << text2;

	return 0;
}