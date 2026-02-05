#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int marks[3];
    float cgpa;
};

void inputStudents(Student* s, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> s[i].rollNo;

        cin.ignore();
        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Enter marks in 3 subjects:\n";
        for (int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
        }
    }
}

void calculateCGPA(Student* s, int n) {
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += s[i].marks[j];
        }
        s[i].cgpa = total / 30.0;
    }
}

void displayAboveThree(Student* s, int n) {
    cout << "\nStudents with CGPA >= 3.0\n";
    for (int i = 0; i < n; i++) {
        if (s[i].cgpa >= 3.0) {
            cout << "Roll No: " << s[i].rollNo
                 << ", Name: " << s[i].name
                 << ", CGPA: " << s[i].cgpa << endl;
        }
    }
}

void topPerformer(Student* s, int n) {
    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].cgpa > s[topIndex].cgpa) {
            topIndex = i;
        }
    }

    cout << "\nTop Performer\n";
    cout << "Roll No: " << s[topIndex].rollNo << endl;
    cout << "Name: " << s[topIndex].name << endl;
    cout << "CGPA: " << s[topIndex].cgpa << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    inputStudents(students, n);
    calculateCGPA(students, n);
    displayAboveThree(students, n);
    topPerformer(students, n);

    delete[] students;
    return 0;
}