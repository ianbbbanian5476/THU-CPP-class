// binaryFile12.cpp
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    Student();
    Student(int, string, int);
    void display();
    string getName();
    int getScore();

private:
    int id;
    string name;
    int score;
};
Student::Student()
{
    id = 0;
    name = "John";
    score = 60;
}
Student::Student(int id2, string name2, int score2)
{
    id = id2;
    name = name2;
    score = score2;
}
void Student::display()
{
    cout << name << " " << score << endl;
}
int main()
{
    fstream binaryIO;
    Student stu1;
    Student stu2(1, "Linda", 92);
    Student stu3(2, "Bright", 98);
    Student stu4(3, "Ian", 100);
    Student stu5(4, "Tony", 200);
    stu1.display();
    stu2.display();
    stu3.display();
    stu4.display();
    stu5.display();
    binaryIO.open("classObj4.dat", ios::out | ios::binary);
    binaryIO.write(reinterpret_cast<char *>(&stu1), sizeof(Student));
    binaryIO.write(reinterpret_cast<char *>(&stu2), sizeof(Student));
    binaryIO.write(reinterpret_cast<char *>(&stu3), sizeof(Student));
    binaryIO.write(reinterpret_cast<char *>(&stu4), sizeof(Student));
    binaryIO.write(reinterpret_cast<char *>(&stu5), sizeof(Student));
    binaryIO.close();
    // read data from file
    Student studentData;
    cout << "\nreading data..." << endl;
    binaryIO.open("classObj4.dat", ios::in | ios::binary);
    while (binaryIO.read(reinterpret_cast<char *>(&studentData),
                         sizeof(Student)))
    {
        studentData.display();
    }
    binaryIO.close();
    return 0;
}