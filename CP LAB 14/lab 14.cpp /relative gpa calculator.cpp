// Name: Abdul Ahad
// Department: Electrical Engineering (AI)
// Registration No: BF25NWELE0692
// Section: B

#include <iostream>
#include <string>
using namespace std;

// ---------- Module 1: Weighted Marks ----------
double calculateMarks(double sessional, double mid, double final) {
    return (sessional * 0.25) + (mid * 0.25) + (final * 0.50);
}

// ---------- Module 2: Average Calculation ----------
double calculateAverage(double subjectMarks[], double subjectCredits[], int subjectCount) {
    double total = 0, credits = 0;
    for(int i=0; i<subjectCount; i++) {
        total += subjectMarks[i] * subjectCredits[i];
        credits += subjectCredits[i];
    }
    return total / credits;
}

// ---------- Module 3: Relative GPA ----------
double calculateRelativeGPA(double studentAvg, double topperAvg) {
    double gpa = (studentAvg / topperAvg) * 4.0;
    return (gpa > 4.0) ? 4.0 : gpa;
}

// ---------- Module 4: Grade Assignment ----------
string assignGrade(double studentMarks, double topperMarks) {
    double normalized = (studentMarks / topperMarks) * 100;
    if(normalized >= 85) return "A";
    else if(normalized >= 80) return "A-";
    else if(normalized >= 75) return "B+";
    else if(normalized >= 70) return "B";
    else if(normalized >= 65) return "B-";
    else if(normalized >= 60) return "C+";
    else if(normalized >= 55) return "C";
    else if(normalized >= 50) return "C-";
    else if(normalized >= 45) return "D+";
    else if(normalized >= 40) return "D";
    else return "F";
}

// ---------- Module 5: Report ----------
void printReport(string name, double relativeGPA, double subjectMarks[], int subjectCount, double subjectTopperMarks[]) {
    cout << "\nStudent: " << name << endl;
    cout << "Relative GPA = " << relativeGPA << endl;
    cout << "--- Subject Grades ---\n";
    for(int i=0; i<subjectCount; i++) {
        cout << "Subject " << i+1 << " ? Marks = " << subjectMarks[i]
             << " ? Grade = " << assignGrade(subjectMarks[i], subjectTopperMarks[i]) << endl;
    }
}

// ---------- MAIN FUNCTION ----------
int main() {
    int students;
    cout << "Enter number of students: ";
    cin >> students;

    string names[100];
    double subjectMarks[100][50];
    double subjectCredits[100][50];
    int subjectCount[100];
    double subjectTopperMarks[50] = {0};
    double studentAvg[100];
    double topperAvg = 0;

    // --- Input + Weighted Marks + Average ---
    for(int s=0; s<students; s++) {
        cout << "\nEnter name of Student " << s+1 << ": ";
        cin >> names[s];
        cout << "Enter number of subjects for " << names[s] << ": ";
        cin >> subjectCount[s];

        for(int i=0; i<subjectCount[s]; i++) {
            double sessional, mid, final, credit;
            cout << "\nSubject " << i+1 << " credit hours: ";
            cin >> credit;
            cout << "Sessional marks: "; cin >> sessional;
            cout << "Mid marks: "; cin >> mid;
            cout << "Final marks: "; cin >> final;

            subjectMarks[s][i] = calculateMarks(sessional, mid, final);
            subjectCredits[s][i] = credit;

            // Track subject topper marks
            if(subjectMarks[s][i] > subjectTopperMarks[i]) {
                subjectTopperMarks[i] = subjectMarks[s][i];
            }
        }

        // Calculate average for this student
        studentAvg[s] = calculateAverage(subjectMarks[s], subjectCredits[s], subjectCount[s]);

        // Track overall topper average
        if(studentAvg[s] > topperAvg) topperAvg = studentAvg[s];
    }

    // --- Final Report ---
    cout << "\n=== Final Report ===\n";
    for(int s=0; s<students; s++) {
        double relativeGPA = calculateRelativeGPA(studentAvg[s], topperAvg);
        printReport(names[s], relativeGPA, subjectMarks[s], subjectCount[s], subjectTopperMarks);
    }

    return 0;
}
