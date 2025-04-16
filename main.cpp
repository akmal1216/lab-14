//lab 14

// problem 1

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ofstream outFile("output.txt");
//
//     if (outFile.is_open()) {
//         outFile << "Hello, File!";
//         outFile.close();
//         cout << "Text written to output.txt" << endl;
//     } else {
//         cout << "Error: Could not create file." << endl;
//     }
//
//     return 0;
// }


// problem 2

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream file("greeting.txt");
//     const int BUFFER_SIZE = 1000;
//     char content[BUFFER_SIZE];
//
//     if (!file.is_open()) {
//         cout << "Error: Could not open file." << endl;
//         return 1;
//     }
//
//
//     while (file.getline(content, BUFFER_SIZE)) {
//         cout << content << endl;
//     }
//
//     file.close();
//     return 0;
// }

// problem 3

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ofstream outFile("user.txt");
//     const int MAX_NAME_LENGTH = 50;
//     char name[MAX_NAME_LENGTH];
//     int age;
//
//
//     cout << "Enter name (max 49 characters): ";
//     cin.getline(name, MAX_NAME_LENGTH);
//
//     cout << "Enter age: ";
//     cin >> age;
//
//
//     if (outFile.is_open()) {
//         outFile << name << " " << age;
//         outFile.close();
//         cout << "Data written to user.txt" << endl;
//     } else {
//         cout << "Error: Could not open file." << endl;
//     }
//
//     return 0;
// }

// problem 4

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream file("data.txt");
//     const int MAX_LINE_LENGTH = 1000;
//     char line[MAX_LINE_LENGTH];
//
//     if (!file.is_open()) {
//         cout << "Error: Could not open file." << endl;
//         return 1;
//     }
//
//     while (file.getline(line, MAX_LINE_LENGTH)) {
//         cout << line << endl;
//     }
//
//     file.close();
//     return 0;
// }


// problem 5

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream source("source.txt");
//     ofstream target("target.txt");
//     char ch;
//
//     while (source.get(ch)) {
//         target.put(ch);
//     }
//
//     source.close();
//     target.close();
//     return 0;
// }


// problem 6

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream inFile("essay.txt");
//     char word[100];
//     int count = 0;
//
//     while (inFile >> word) {
//         count++;
//     }
//
//     inFile.close();
//     cout << "Total words: " << count << endl;
//     return 0;
// }


// problem 7

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream inFile("numbers.txt");
//     int number, sum = 0;
//
//     while (inFile >> number) {
//         sum += number;
//     }
//
//     inFile.close();
//     cout << "Sum: " << sum << endl;
//     return 0;
// }

// problem 8

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// int main() {
//     ifstream inFile("values.txt");
//     int number, maxVal, minVal;
//
//     if (inFile >> number) {
//         maxVal = minVal = number;
//     }
//
//     while (inFile >> number) {
//         if (number > maxVal) maxVal = number;
//         if (number < minVal) minVal = number;
//     }
//
//     inFile.close();
//     cout << "Max: " << maxVal << ", Min: " << minVal << endl;
//     return 0;
// }

// problem 9

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// struct Student {
//     int id;
//     char name[50];
//     float gpa;
// };
//
// int main() {
//     Student s;
//
//     cout << "Enter ID, Name, GPA: ";
//     cin >> s.id >> s.name >> s.gpa;
//
//     ofstream outFile("student.txt");
//     outFile << s.id << " " << s.name << " " << s.gpa;
//     outFile.close();
//
//     return 0;
// }


// problem 10

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// struct Student {
//     int id;
//     char name[50];
//     float gpa;
// };
//
// int main() {
//     Student s;
//
//     ifstream inFile("student.txt");
//     inFile >> s.id >> s.name >> s.gpa;
//     inFile.close();
//
//     cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
//
//     return 0;
// }

// problem 11

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// struct Student {
//     int id;
//     char name[50];
//     float gpa;
// };
//
// int main() {
//     Student s[3];
//
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter ID, Name, GPA for student " << (i + 1) << ": ";
//         cin >> s[i].id >> s[i].name >> s[i].gpa;
//     }
//
//     ofstream outFile("class.txt");
//     for (int i = 0; i < 3; i++) {
//         outFile << s[i].id << " " << s[i].name << " " << s[i].gpa << endl;
//     }
//     outFile.close();
//
//     return 0;
// }

// problem 12

// #include <iostream>
// #include <fstream>
// using namespace std;
//
// struct Student {
//     int id;
//     char name[50];
//     float gpa;
// };
//
// int main() {
//     Student s;
//     ifstream inFile("class.txt");
//
//     while (inFile >> s.id >> s.name >> s.gpa) {
//         cout << "ID: " << s.id << ", Name: " << s.name << ", GPA: " << s.gpa << endl;
//     }
//
//     inFile.close();
//     return 0;
// }

// problem 13

// #include <iostream>
// using namespace std;
//
// struct Date {
//     int day;
//     int month;
//     int year;
// };
//
// int main() {
//     Date d;
//
//     cout << "Enter day, month, year: ";
//     cin >> d.day >> d.month >> d.year;
//
//     cout << d.day << "-";
//     if (d.month < 10) cout << "0";
//     cout << d.month << "-";
//     cout << d.year << endl;
//
//     return 0;
// }

// problem 14

// #include <iostream>
// using namespace std;
//
// struct StudentInfo {
//     int Id;
//     int Age;
//     char Gender;
//     float CGA;
// };
//
// int main() {
//     StudentInfo s;
//
//     cout << "Enter Id, Age, Gender, CGA: ";
//     cin >> s.Id >> s.Age >> s.Gender >> s.CGA;
//
//     cout << "Id: " << s.Id << ", Age: " << s.Age
//          << ", Gender: " << s.Gender << ", CGA: " << s.CGA << endl;
//
//     return 0;
// }

// problem 15

// #include <iostream>
// using namespace std;
//
// struct StudentGrade {
//     int Lab[5];
//     int Homework[3];
//     int Exam[2];
// };
//
// int main() {
//     StudentGrade s;
//     int total = 0;
//     float average;
//     int count = 0;
//
//     cout << "Enter 5 Lab grades: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> s.Lab[i];
//         total += s.Lab[i];
//         count++;
//     }
//
//     cout << "Enter 3 Homework grades: ";
//     for (int i = 0; i < 3; i++) {
//         cin >> s.Homework[i];
//         total += s.Homework[i];
//         count++;
//     }
//
//     cout << "Enter 2 Exam grades: ";
//     for (int i = 0; i < 2; i++) {
//         cin >> s.Exam[i];
//         total += s.Exam[i];
//         count++;
//     }
//
//     average = (float)total / count;
//
//     cout << "Total: " << total << ", Average: " << average << endl;
//
//     return 0;
// }

//problem 16

// #include <iostream>
// using namespace std;
//
// struct StudentInfo {
//     int Id;
//     int Age;
//     char Gender;
//     float CGA;
// };
//
// int main() {
//     StudentInfo students[3];
//
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter Id, Age, Gender, CGA for student " << (i + 1) << ": ";
//         cin >> students[i].Id >> students[i].Age >> students[i].Gender >> students[i].CGA;
//     }
//
//     cout << "\nStudent Records:\n";
//     for (int i = 0; i < 3; i++) {
//         cout << "Id: " << students[i].Id
//              << ", Age: " << students[i].Age
//              << ", Gender: " << students[i].Gender
//              << ", CGA: " << students[i].CGA << endl;
//     }
//
//     return 0;
// }

// problem 17

// #include <iostream>
// using namespace std;
//
// struct StudentInfo {
//     int Id;
//     int Age;
//     char Gender;
//     float CGA;
// };
//
// int main() {
//     StudentInfo student1, student2;
//
//     cout << "Enter Id, Age, Gender, CGA for student1: ";
//     cin >> student1.Id >> student1.Age >> student1.Gender >> student1.CGA;
//
//     student2 = student1; // Copy values from student1 to student2
//
//     cout << "\nStudent1: Id=" << student1.Id << ", Age=" << student1.Age
//          << ", Gender=" << student1.Gender << ", CGA=" << student1.CGA << endl;
//
//     cout << "Student2: Id=" << student2.Id << ", Age=" << student2.Age
//          << ", Gender=" << student2.Gender << ", CGA=" << student2.CGA << " (copied)" << endl;
//
//     return 0;
// }

// problem 18

// #include <iostream>
// using namespace std;
//
// struct StudentInfo {
//     char name[50];
//     int roll;
//     float marks;
// };
//
// int main() {
//     StudentInfo students[5];
//
//
//     const char* tempName = "Alice";
//     int i = 0;
//     while (tempName[i] != '\0') {
//         students[2].name[i] = tempName[i];
//         i++;
//     }
//     students[2].name[i] = '\0';
//     students[2].roll = 103;
//     students[2].marks = 85.5;
//
//
//     i = 0;
//     while (students[2].name[i] != '\0') {
//         students[4].name[i] = students[2].name[i];
//         i++;
//     }
//     students[4].name[i] = '\0';
//     students[4].roll = students[2].roll;
//     students[4].marks = students[2].marks;
//
//
//     cout << "Student3: " << students[2].name << ", " << students[2].roll << ", " << students[2].marks << endl;
//     cout << "Student5: " << students[4].name << ", " << students[4].roll << ", " << students[4].marks << endl;
//
//     return 0;
// }

// problem 19

// #include <iostream>
// using namespace std;
//
// struct Date {
//     int day;
//     int month;
//     int year;
// };
//
// struct BankAccount {
//     char Name[15];
//     int AccountNo;
//     float balance;
//     Date Birthday;
// };
//
// int main() {
//     BankAccount account;
//
//     cout << "Enter name (max 14 chars): ";
//     cin >> account.Name;
//
//     cout << "Enter account number: ";
//     cin >> account.AccountNo;
//
//     cout << "Enter balance: ";
//     cin >> account.balance;
//
//     cout << "Enter birthday (day month year): ";
//     cin >> account.Birthday.day >> account.Birthday.month >> account.Birthday.year;
//
//     cout << "Name: " << account.Name << ", "
//          << "AccountNo: " << account.AccountNo << ", "
//          << "Birthday: "
//          << account.Birthday.day << "-"
//          << account.Birthday.month << "-"
//          << account.Birthday.year << endl;
//
//     return 0;
// }

//problem 20

// #include <iostream>
// using namespace std;
//
// struct Point {
//     float x;
//     float y;
// };
//
// struct Line {
//     Point p1;
//     Point p2;
// };
//
// float approximateSqrt(float num) {
//     float sqrt = num / 2;
//     float temp = 0;
//     while(sqrt != temp) {
//         temp = sqrt;
//         sqrt = (num/temp + temp)/2;
//     }
//     return sqrt;
// }
//
// int main() {
//     Line line;
//
//     cout << "Enter x and y for point 1: ";
//     cin >> line.p1.x >> line.p1.y;
//
//     cout << "Enter x and y for point 2: ";
//     cin >> line.p2.x >> line.p2.y;
//
//     float dx = line.p2.x - line.p1.x;
//     float dy = line.p2.y - line.p1.y;
//     float distance = approximateSqrt(dx*dx + dy*dy);
//
//     cout << "Distance = " << distance << endl;
//
//     return 0;
// }

//problem 21

// #include <iostream>
// using namespace std;
//
// struct Point {
//     float x;
//     float y;
// };
//
// struct Triangle {
//     Point p1;
//     Point p2;
//     Point p3;
// };
//
// float calculateDistance(Point a, Point b) {
//     float dx = b.x - a.x;
//     float dy = b.y - a.y;
//     float sum = dx*dx + dy*dy;
//
//
//     float sqrt = sum / 2;
//     float temp = 0;
//     while (sqrt != temp) {
//         temp = sqrt;
//         sqrt = (sum/temp + temp) / 2;
//     }
//     return sqrt;
// }
//
// int main() {
//     Triangle tri;
//
//     cout << "Enter coordinates for point 1 (x y): ";
//     cin >> tri.p1.x >> tri.p1.y;
//
//     cout << "Enter coordinates for point 2 (x y): ";
//     cin >> tri.p2.x >> tri.p2.y;
//
//     cout << "Enter coordinates for point 3 (x y): ";
//     cin >> tri.p3.x >> tri.p3.y;
//
//     float side1 = calculateDistance(tri.p1, tri.p2);
//     float side2 = calculateDistance(tri.p2, tri.p3);
//     float side3 = calculateDistance(tri.p3, tri.p1);
//
//     float perimeter = side1 + side2 + side3;
//
//     cout << "Perimeter = " << perimeter << endl;
//
//     return 0;
// }

//problem 22

// #include <iostream>
// using namespace std;
//
// struct Point {
//     float x;
//     float y;
// };
//
// struct Square {
//     Point vertex[4];
// };
//
// int main() {
//     Square sq;
//
//     cout << "Enter coordinates of 4 vertices (x y):\n";
//     for (int i = 0; i < 4; i++) {
//         cin >> sq.vertex[i].x >> sq.vertex[i].y;
//     }
//
//     float side1 = sq.vertex[1].y - sq.vertex[0].y;  // Height
//     float side2 = sq.vertex[3].x - sq.vertex[0].x;  // Width
//
//     float area = side1 * side2;
//
//     cout << "Area = " << area;
//
//     return 0;
// }

// problem 23

// #include <iostream>
// using namespace std;
//
// struct StudentGrade {
//     int lab;
//     int homework;
//     int exam;
//     int total;
// };
//
// int main() {
//     StudentGrade students[3];
//
//     for (int i = 0; i < 3; i++) {
//         cout << "Enter Lab, Homework, Exam grades for Student " << i+1 << ": ";
//         cin >> students[i].lab >> students[i].homework >> students[i].exam;
//         students[i].total = students[i].lab + students[i].homework + students[i].exam;
//     }
//
//     int max_index = 0;
//     for (int i = 1; i < 3; i++) {
//         if (students[i].total > students[max_index].total) {
//             max_index = i;
//         }
//     }
//
//     cout << "Student " << max_index+1 << " has the highest total: " << students[max_index].total;
//
//     return 0;
// }

// problem 24

// #include <iostream>
// using namespace std;
//
// struct Contact {
//     char Name[30];
//     char Phone[15];
//     char Email[30];
// };
//
// int main() {
//     Contact contacts[10];
//     char searchName[30];
//     bool found = false;
//
//     // Input 10 contacts
//     cout << "Enter 10 contacts (Name Phone Email):\n";
//     for (int i = 0; i < 10; i++) {
//         cin >> contacts[i].Name >> contacts[i].Phone >> contacts[i].Email;
//     }
//
//     // Search functionality
//     cout << "Enter name to search: ";
//     cin >> searchName;
//
//     for (int i = 0; i < 10; i++) {
//         bool match = true;
//         for (int j = 0; searchName[j] != '\0' || contacts[i].Name[j] != '\0'; j++) {
//             if (searchName[j] != contacts[i].Name[j]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match) {
//             cout << contacts[i].Name << ", " << contacts[i].Phone << ", " << contacts[i].Email << endl;
//             found = true;
//             break;
//         }
//     }
//
//     if (!found) {
//         cout << "Contact not found.\n";
//     }
//
//     return 0;
// }