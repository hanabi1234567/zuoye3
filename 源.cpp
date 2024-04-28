#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 学生类
class Student {
private:
    string name;
    int age;
    string address;
    string rollNo;

public:
    // 构造函数
    Student(string name, int age, string address, string rollNo) {
        this->name = name;
        this->age = age;
        this->address = address;
        this->rollNo = rollNo;
    }

    // 打印学生信息
    void printInfo() {
        cout << "姓名: " << name << endl;
        cout << "年龄: " << age << endl;
        cout << "地址: " << address << endl;
        cout << "学号: " << rollNo << endl;
    }

    // 获取学生姓名
    string getName() {
        return name;
    }
};

// 学生管理系统类
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // 添加学生
    void addStudent(Student student) {
        students.push_back(student);
    }

    // 显示所有学生信息
    void displayStudents() {
        cout << "所有学生信息：" << endl;
        for (Student student : students) {
            student.printInfo();
            cout << endl;
        }
    }

    // 搜索学生信息
    void searchStudent(string name) {
        bool found = false;
        for (Student student : students) {
            if (student.getName() == name) {
                cout << "找到学生信息：" << endl;
                student.printInfo();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "未找到学生信息。" << endl;
        }
    }
};

int main() {
    StudentManagementSystem sms;

    // 添加几个学生
    Student student1("张三", 20, "北京", "2023001");
    Student student2("李四", 21, "上海", "2023002");
    Student student3("王五", 22, "广州", "2023003");
    Student student4("老六", 22, "黄山", "2023004");
    Student student5("老七", 20, "泰山", "2023005");
    Student student6("小八", 21, "沈阳", "2023006");

    sms.addStudent(student1);
    sms.addStudent(student2);
    sms.addStudent(student3);
    sms.addStudent(student4);
    sms.addStudent(student5);
    sms.addStudent(student6);

    // 显示所有学生信息
    sms.displayStudents();

    // 搜索学生信息
    cout << "请输入要搜索的学生姓名: ";
    string name;
    cin >> name;
    sms.searchStudent(name);

    return 0;
}