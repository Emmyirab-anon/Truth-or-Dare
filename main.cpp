#include <iostream>
#include "TruthDare.h"
using namespace std;

int main()
{
	cout << fixed;
	string firstSelection;
	cout << setw(10) << "Please make a selection from; FUN (F)... GIRLS (G)... BOYS (B)... ROMANCE (R)...::: ";
	cin >> firstSelection;
	string secondSelectionMain;

	if (firstSelection == "F" || firstSelection == "f")
		funFunc(secondSelectionMain);
	else if (firstSelection == "G" || firstSelection == "g")
		girlsFunc(secondSelectionMain);
	else if (firstSelection == "B" || firstSelection == "b")
		boysFunc(secondSelectionMain);
	else if (firstSelection == "R" || firstSelection == "r")
		romanceFunc(secondSelectionMain);
	else
		cout << "NO VALID SELECTION MADE!" << endl;
	



	return 0;
}