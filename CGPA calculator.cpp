
#include <iostream>
using namespace std;
/* Haggla Mensah Agyei
   University Of Energy And Natural Resources */

int main() {
    int numCourses, credits, totalCredits = 0;
    float grade, totalGradePoints = 0, GPA , cGPA ;
    string name;
    char letter;
    
    while (true) {
        cout << "Enter the number of courses: ";
        if (cin >> numCourses) {
            break;
        } else {
            cout << "Wrong input! ";
            cin.clear();
            cin.ignore(123456, '\n');
        }
    }
    
    for (int i = 1; i <= numCourses; i++) {
        cout << "Enter the name of course " << i << ": ";
        cin >> name;

        while (true) {
            cout << "Enter the credits: ";
            if (cin >> credits) {
                totalCredits += credits;
                break;
            } else {
                cout << "Wrong input! ";
                cin.clear();
                cin.ignore(123456, '\n');
            }
        }

        
        
        while (true) {
            cout << "Enter the Gradepoint: ";
            if (cin >> grade && grade >= 0 && grade <= 5) {
            totalGradePoints += grade * credits;
                break;
            } else {
                cout << "Wrong input! " ;
                cin.clear();
                cin.ignore(123456, '\n');
            }
        }

    
    GPA = totalGradePoints / totalCredits;
    cout <<endl;
    cout << "Your Total GradePoint for this semester is: " << totalGradePoints << endl;
    cout << endl;
    cout << "Your Credits for this semester is: " << totalCredits << endl;
    cout <<endl;
    cout << "Your GPA for this semester is: " << GPA << endl;
    
// asking if the user would like to check their cGPA
    cout << "Would you like to check your cGPA (Y/N)? ";
    cin >>letter;
    
   while (!((letter=='y') || (letter=='Y') || (letter=='n') || (letter=='N')) ){
    cout << "Error! Enter Y/N: ";
    cin.clear();
    cin.ignore(123456, '\n');
    cin>> letter;
    }
    
    
    if (letter=='Y' || letter=='y') {
    
        // Calculating CGPA
    float prevCgpa, prevTotalCredits, prevTotalGradePoints;
    int numPrevCourses;
    
   while (true) {
            cout << "Enter your previous Total Credits: ";
            if (cin >> prevTotalCredits) {
            break;
            }
            else {
                cout << "Wrong input! ";
                cin.clear();
                cin.ignore(123456, '\n');
            }
        }
       
    
   while (true) {
            cout << "Enter the Total GradePoint for previous course: " ;
            if (cin >> prevTotalGradePoints) {
                
            break;
            }
            else {
                cout << "Wrong input! \n";
                cin.clear();
                cin.ignore(123456, '\n');
            }
        }
    cGPA = (prevTotalGradePoints + totalGradePoints) / (prevTotalCredits + totalCredits);
    
    cout << "Your cGPA is: " << cGPA << endl;
    
    }
    else if (letter=='n' || letter=='N') {
    cout << "Glad to serve you. See you next time (:"<<endl;
    return 0;
    }
    } 
    return 0;
}