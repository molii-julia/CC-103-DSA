#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int totalMarks;
};

int main() {
    Student n;

    cout << "Enter student details:\n";

    cout << "Name: ";
    cin.getline(n.name, 50);

    cout << "Roll Number: ";
    cin >> n.rollNumber;

    cout << "Enter marks for 5 subjects:\n";
    n.totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> n.marks[i];
        n.totalMarks += n.marks[i];
    }

    cout << "\nStudent details:\n";
    cout << "Name: " << n.name << endl;
    cout << "Roll Number: " << n.rollNumber << endl;
    cout << "Marks:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": " << n.marks[i] << endl;
    }
    cout << "Total Marks: " << n.totalMarks << endl;

    return 0;
}