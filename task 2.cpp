#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	string name;  int age;
	cout << "Enter your name=";
	cin >> name;
	cout << "\nEnter your age=";
	cin >> age;
	ofstream fout;
	fout.open("tennis", ios::out);
	if (fout)
	{
		fout << name;
		fout << age;
		fout.close();
	}
	else
		cout << "Error";


	ifstream fin;
	fin.open("tennis", ios::in);
		if (fin)
		{
			cout << "Reading from the file\n";
			fin >> name >> age;
			cout << name << age;
			fin.close();
		}
		
}