#include <iostream>
using namespace std;
class student
{
    private:
    int rollno;
    int marks[5];
    public:
    char name[30];
    void inputinfo()
    {
        cout << "Enter name of the Student: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks of the student:" << endl;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Marks in the Subject(out of 100) " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    int total()
    {
        int sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            sum += marks[i];
        }
        return sum;
    }
};
void dispTotalNPercent(student s[], int n)
{
    int percent;
    for (int i = 0; i < n; ++i)
    {
        cout << endl
             << "Student " << i + 1 << ":\tName: " << s[i].name << "\tTotal marks: " << s[i].total() << "\tPercentage: " << ((float)s[i].total() / 500) * 100 << "%";
    }
}
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; ++i)
    {
        cout << endl
             << "Student " << i + 1 << ":\t" << endl;
        s[i].inputinfo();
    }
    dispTotalNPercent(s, n);
     return 0;
}
