
#include "pch.h"
#include <iostream>
#include <algorithm>

using namespace std;

bool haveSameNumber(char name[50], char grade[10])
{
	for (int i = 0; i < 6; i++)
	{
		if (name[i] != grade[i])
		{
			return false;
		}
	}
	return true;
}

bool haveData(char name[50], char grade[10])
{

	if (name[6] == '\0')
	{
		return false;
	}

	for (int i = 6; i < 10; i++)
	{
		if (grade[i] == '\0')
		{
			return false;
		}
	}

	return true;
}

bool gradeIsValid(char grade[10])
{
	int grade_first_digit = grade[6] - 48;
	if (grade_first_digit <= 4 || (grade_first_digit == 5 && grade[8] - 48 == 0 && grade[9] - 48 == 0))
	{
		return true;
	}
	return false;
}

void printStudentGrade(char grade[10])
{
	cout << (grade[6] - 48) + 1;

	for (int i = 7; i < 10; i++)
	{
		cout << grade[i];
	}


}

void printStudentName(char student[50])
{
	for (int i = 6; i < 50; i++)
	{
		if (student[i] == '\0')
		{
			break;
		}
		cout << student[i];
	}
}


int main()
{
	char students[20][50];
	char grades[20][10];

	int n, m;
	cout << "Enter students list count : " << endl;
	cin >> n;
	cout << "Enter grades list count : " << endl;
	cin >> m;


	for (int i = 0; i < n; i++)
	{
		cout << "Enter student faculty number and name : " << endl;
		cin >> students[i];
	}

	for (int i = 0; i < m; i++)
	{
		cout << "Enter student faculty number and grade : " << endl;
		cin >> grades[i];
	}

	cout << "Students with grades equal or less than 5 : " << endl;

	for (int i = 0; i < max(n, m); i++)
	{
		if (haveSameNumber(students[i], grades[i]) && haveData(students[i], grades[i]))
		{
			if (gradeIsValid(grades[i]))
			{
				printStudentName(students[i]);
				cout << "  - >  ";
				printStudentGrade(grades[i]);
				cout << endl;
			}
		}
	}


}
