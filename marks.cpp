#include <iostream>
using namespace std;
class student
{
public:
    char name[25];
    int marks[6][6];
    char usn[10];
    int sub;
    int test;
    void insertData();
    void printData();
    void avgMarks();
    // average marks is concluded for best of two among three test!!!!!!!!
};
void student::insertData()
{
    cout << "Enter the name of the Student: " << endl;
    cin >> name;
    cout << "Enter the USN of the Student: " << endl;
    cin >> usn;
    cout << "enter the number of test : ";
    cin >> test;
    cout << "enter the number of subjects : ";
    cin >> sub;

    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            cout << "Marks in Test" << (i + 1) << " Subject" << (j + 1) << ": " << endl;
            cin >> marks[i][j];
        }
    }
}
void student::printData()
{
    cout << "\nName of the Student : " << name;
    cout << "\nUSN of the Student   : " << usn;
    cout << "\nMarks in each subject are as follows:\n";
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            cout << "Test " << i + 1 << ": Subject " << j + 1 << ": Marks = " << marks[i][j] << endl;
        }
    }
}
void student::avgMarks()
{
}

int main()
{
    student s1;
    s1.insertData();
    s1.printData();

    return 0;
}