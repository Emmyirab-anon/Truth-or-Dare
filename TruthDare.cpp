#include "TruthDare.h"

void funFunc(string secondSelection)
{
	cout << "YOU CHOSE FUN!" << endl << endl;
	while (secondSelection != "Q" || secondSelection != "q")
	{
		cout << setw(20) << "Truth(T)" << setw(20) << "Dare(D)" << endl;
		cin >> secondSelection;
		if (secondSelection == "T" || secondSelection == "t")
		{
			ifstream inData;
			string file[fun];
			inData.open("Fun.txt");
			for (int i = 0; i < fun; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % fun] << endl;

		}
		else if (secondSelection == "D" || secondSelection == "d")
		{

			ifstream inData;
			string file[dare];
			inData.open("Dare.txt");
			for (int i = 0; i < dare; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % dare] << endl;
		}
		else
			cout << "NOT A VALID SELECTION" << endl;
	}
}
void girlsFunc(string secondSelection)
{
	cout << "YOU CHOSE GIRL'S NIGHT!" << endl << endl;
	while (secondSelection != "Q" || secondSelection != "q")
	{
		cout << setw(20) << "Truth(T)" << setw(20) << "Dare(D)" << endl;
		cin >>secondSelection;
		if (secondSelection == "T" || secondSelection == "t")
		{
			ifstream inData;
			string file[girls];
			inData.open("Girls.txt");
			for (int i = 0; i < girls; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % girls] << endl;

		}
		else if (secondSelection == "D" || secondSelection == "d")
		{

			ifstream inData;
			string file[dare];
			inData.open("Dare.txt");
			for (int i = 0; i < dare; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % dare] << endl;
		}
		else
			cout << "NOT A VALID SELECTION" << endl;
	}
}
void boysFunc(string secondSelection)
{
	cout << "YOU CHOSE BOY'S NIGHT!" << endl << endl;
	while (secondSelection != "Q" || secondSelection != "q")
	{
		cout << setw(20) << "Truth(T)" << setw(20) << "Dare(D)" << endl;
		cin >>secondSelection;
		if (secondSelection == "T" || secondSelection == "t")
		{
			ifstream inData;
			string file[boys];
			inData.open("Boys.txt");
			for (int i = 0; i < boys; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % boys] << endl;

		}
		else if (secondSelection == "D" || secondSelection == "d")
		{

			ifstream inData;
			string file[dare];
			inData.open("Dare.txt");
			for (int i = 0; i < dare; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % dare] << endl;
		}
		else
			cout << "NOT A VALID SELECTION" << endl;
	}
}
void romanceFunc(string secondSelection)
{
	cout << "YOU CHOSE ROMANCE!" << endl << endl;
	while (secondSelection != "Q" || secondSelection != "q")
	{
		cout << setw(20) << "Truth(T)" << setw(20) << "Dare(D)" << endl;
		cin >>secondSelection;
		if (secondSelection == "T" || secondSelection == "t")
		{
			ifstream inData;
			string file[rom];
			inData.open("Romance.txt");
			for (int i = 0; i < rom; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % rom] << endl;

		}
		else if (secondSelection == "D" || secondSelection == "d")
		{

			ifstream inData;
			string file[dare];
			inData.open("Dare.txt");
			for (int i = 0; i < dare; i++)
			{
				getline(inData, file[i]);
			}
			srand(time(NULL));
			cout << file[rand() % dare] << endl;
		}
		else
			cout << "NOT A VALID SELECTION" << endl;
	}
}