//write include statement for decisions header
#include "decisions.h"
#include <iostream>
#include <string>

//Write code for function(s) code here




using std::cout;
using std::string;
using std::cin;




string get_letter_grade_using_switch(int grade)
{
    string letter_grade;
    switch(grade)
    {
        case 90 ... 100:

            letter_grade = "A";
            //cout << letter_grade;
            //cout << "A";
            break;
        
        case 80 ... 89:
            letter_grade = "B";
            //cout << letter_grade;
            //cout << "B";
            break;
        
        case 70 ... 79:
            letter_grade = "C";
            //cout << letter_grade;
            //cout << "C";
            break;
        
        case 60 ... 69:
            letter_grade = "D";
            //cout << letter_grade;
            //cout << "D";
            break;
        
        case 0 ... 59:
            letter_grade = "F";
            //cout << letter_grade;
            //cout << "F";
            break;
        
        default:
            letter_grade = "Out of Range";
            break;
    }
    return string(letter_grade);
}

string get_letter_grade_using_if(int grade)
{
    string letter_grade;
    if (grade >= 90 && grade <= 100)
    {
        letter_grade = "A";
        //cout << letter_grade;
        //cout << "A";
    }

    else if (grade >= 80 && grade <= 90)
    {
        letter_grade = "B";
        //cout << letter_grade;
        //cout << "B";
    }

    else if (grade >= 70 && grade <= 80)
    {
        letter_grade = "C";
        //cout << letter_grade;
        //cout << "C";
    }

    else if (grade >= 60 && grade <= 70)
    {
        letter_grade = "D";
        //cout << letter_grade;
        //cout << "D";
    }

    else if (grade >= 0 && grade <= 60) 
    {
        letter_grade = "F";
        //cout << letter_grade;
        //cout << "F";
    }

    else 
    {
        cout << "Out of Range";
    }
    return string(letter_grade);
}

string menu(int num){
	string result;
	int grade;
	switch(num){
		case 1:
			cout << "Enter the number grade.\n";
			cin >> grade;
			result = get_letter_grade_using_if(grade);
            cout << string(result);
            cout << "\n";
			break;
		case 2:
			cout << "Enter the number grade\n";
			cin >> grade;
			result = get_letter_grade_using_switch(grade);
            cout << string(result);
            cout << "\n";
			break;
		case 3:
			cout << "Goodbye.";
			break;
	}
    return string(result);
}