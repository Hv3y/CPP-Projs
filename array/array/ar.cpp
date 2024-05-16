#include <iostream>
#include<string>
using namespace std;
int main()
{

	string students[4];
	bool pres[4];															//cout << "Enter names of prestent students :";
	
		
																// { "Lesedi", "Lethabo", "Lerato", "Leng", "Leh" };
																//cout << students[0] << endl;
																//cout << students[1]<< endl;
																//cout << students[2]<< endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter students: ";
		cin >> students[i];
		cout << "Was the student present? Enter 0 for NO and 1 for YES :";
		cin >> pres[i];
	}
	cout << "Students register  :" << endl;
	for (int i = 0; i < 4; i++){
		cout << students[i]<<" ";
		cout << pres[i] << "" << endl;
	}






	cin.get();
	cin.ignore();
	system("pause>0");

}