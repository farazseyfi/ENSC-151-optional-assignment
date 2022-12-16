// ENSC 151 extra assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdlib>
#include <iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int percentage, id;
int totalpercentage=0;
		double gradepoint = 0, totalgradepoint = 0, cumulativegpa = 0, credit, totalcredit = 0;
		string  name, option, line, word;
		//ifstream theFile;
	
	ifstream theFile("gpainfo.txt");
	//ifstream theFile;
	//theFile.open("gpainfo.txt");
	
	
	//std::ifstream theFile("gpainfo.txt");

	//for (std::string line; std::getline(theFile, line); )
	//{
		//std::cout << line << std::endl;
	//}
	
	//if (!theFile.is_open())
		//{
			//cout << "Unable to open the file! double check the file name" << endl;
			//return 0;
		 //}
	//while (!theFile.eof()) {
		//getline(theFile, line);
		//iss.clear();
		//iss.str(line);
		//while (iss.good()) {
			//iss >> word;
			//cout >> word >> endl;
		//}
	//}

	while (theFile >> id >> name >> percentage >> credit) 
	{
		std::cout << id << " " << name << " " << percentage << " " << credit << endl;
	}
		switch (percentage)
		{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
			gradepoint = credit * 4.33;
			break;
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			gradepoint = credit * 4.00;
			break;
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
			gradepoint = credit * 3.67;
			break;
		case 84:
		case 83:
		case 82:
		case 81:
		case 80:
			gradepoint = credit * 3.33;
			break;
		case 79:
		case 78:
		case 77:
		case 76:
		case 75:
			gradepoint = credit * 3.00;
			break;
		case 74:
		case 73:
		case 72:
		case 71:
		case 70:
			gradepoint = credit * 2.67;
		case 69:
		case 68:
		case 67:
		case 66:
		case 65:
			gradepoint = credit * 2.33;
			break;
		case 64:
		case 63:
		case 62:
		case 61:
		case 60:
			gradepoint = credit * 2.00;
			break;
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
			gradepoint = credit * 1.67;
			break;
		case 54:
		case 53:
		case 52:
		case 51:
		case 50:
			gradepoint = credit * 1.00;
			break;
		}

		totalgradepoint = totalgradepoint + gradepoint;
		totalcredit = totalcredit + credit;
		cumulativegpa = totalgradepoint / totalcredit;
		std::cout << name << "'s cumulative gpa is: " << cumulativegpa << endl;

		return 0;

	}


