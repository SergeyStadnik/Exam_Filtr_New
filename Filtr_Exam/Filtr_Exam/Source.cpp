#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

void DellSymbol(string text, string dell,string& newText)
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


}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(0, "");
	srand(time(NULL));
	string text1;
	string dellRu;
	string text2;
	string* t2;
	t2 = &text2;
	getline(cin, text1);
	getline(cin, dellRu);
	
	cout << text1<<endl;
	cout << dellRu << endl;
	DellSymbol(text1, dellRu, *t2);
	
	cout << text2;
	system("pause");
	return 0;
}