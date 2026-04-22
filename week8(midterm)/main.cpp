#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "functions.h"

using namespace std;

int main() {

    vector <Student_info> students;
    Student_info record;
  
    int student_count = 0;

    cout << "Enter number of students : ";
    cin >> student_count;

    for (int i = 0; i < student_count; ++i) {
        cout << "\n== Student " << i + 1 << " ==" << endl;

        cout << "Enter name: ";
        cin >> record.name;

        cout << "Enter 3 scores: ";
        double score;
        for (int j = 0; j < 3; ++j) {
            if (cin >> score) {
                record.grades.push_back(score);
            }
        }
        students.push_back(record);
    }

  
    cout << "\n--- Grade Summary ---" << endl;

    // 소수점 한 자리까지 출력 설정
    cout << fixed << setprecision(1);

    for (int i = 0; i < students.size(); ++i) {
        double avg = calculateAverage(students[i].grades);
        cout << students[i].name << ": " << avg << endl;
    }
    return 0;
}
