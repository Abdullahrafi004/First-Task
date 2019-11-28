#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	int fed[5] = { 1,2,3,4,5 };
	int sum = 0;
	ofstream fout;
	fout.open("tennis", ios::out);
		if (fout)
		{
			cout << "Writing arrays elements";
			for (int j = 0; j <= 5; j++)
			{
				fout << fed[j] << " ";
			}
				fout.close();
			
		}
		else
			cout << "Error";
    ifstream fin;
    fin.open("tennis", ios::in);
	if (fin)
	{
		cout << "\n The retrieved array is";
		cout << "\n";
		for (int k = 0; k <= 5; k++)
		{
			fin >> fed[k];
			cout << fed[k] << " ";
			sum = sum + fed[k];

		}

		

	}
	else
		cout << "Error";
	fin.close();

	
	ofstream app;
	app.open("federer", ios::app);
	if (app)
	{
		cout << "\nSum appended successfully";
		
		
		app.close();
	}
	else
		cout << "Error";
}
