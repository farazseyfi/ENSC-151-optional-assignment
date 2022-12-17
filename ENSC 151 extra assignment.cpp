// ENSC 151 extra assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
// A C++ program which grabs data such as percentage and credit to calculate the gpa of a few courses in a 4.33 scale.
// created by Faraz Seyfi and Ali Aryo for ENSC 151 optional assignment.
#include <cstdlib>
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	int id, percentage;
	double gradepoint = 0, totalgradepoint = 0, cumulativegpa = 0, credit=0, totalcredit = 0;
	string  name;
	
	//opening the file
	ifstream theFile("gpainfo.txt");
	// checking to see if the file was succesfuly opened.If not, it will notice the user!
	if (!theFile.is_open()) {
		cerr << "unable to open the file! please double check the file name." << endl;
		return 1;
	}
	// a while loop to loop throught the text file and grab data such as percentage and credit for each course
	while (theFile >> id >> name >> percentage >> credit)
	{
		// a switch case to calculate the gradepoint for each specific percentage.
		switch (percentage)
		{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			gradepoint = credit * 4.33;
			break;
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
			gradepoint = credit * 4.00;
			break;
		case 84:
		case 83:
		case 82:
		case 81:
		case 80:
			gradepoint = credit * 3.67;
			break;
		case 79:
		case 78:
		case 77:
			gradepoint = credit * 3.33;
			break;
		case 76:
		case 75:
		case 74:
		case 73:
			gradepoint = credit * 3.00;
			break;
		case 72:
		case 71:
		case 70:
			gradepoint = credit * 2.67;
			break;
		case 69:
		case 68:
		case 67:
			gradepoint = credit * 2.33;
			break;
		case 66:
		case 65:
		case 64:
		case 63:
			gradepoint = credit * 2.00;
			break;
		case 62:
		case 61:
		case 60:
			gradepoint = credit * 1.67;
			break;
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
			gradepoint = credit * 1.33;
			break;
		case 54:
		case 53:
		case 52:
		case 51:
			gradepoint = credit * 1.00;
			break;
		}
		totalcredit += credit;
		totalgradepoint += gradepoint;
	}
	cumulativegpa = totalgradepoint / totalcredit;
	cout << name << "'s cumulative gpa is: " << cumulativegpa << endl;
	}



