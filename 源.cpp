#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ѧ����
class Student {
private:
    string name;
    int age;
    string address;
    string rollNo;

public:
    // ���캯��
    Student(string name, int age, string address, string rollNo) {
        this->name = name;
        this->age = age;
        this->address = address;
        this->rollNo = rollNo;
    }

    // ��ӡѧ����Ϣ
    void printInfo() {
        cout << "����: " << name << endl;
        cout << "����: " << age << endl;
        cout << "��ַ: " << address << endl;
        cout << "ѧ��: " << rollNo << endl;
    }

    // ��ȡѧ������
    string getName() {
        return name;
    }
};

// ѧ������ϵͳ��
class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // ���ѧ��
    void addStudent(Student student) {
        students.push_back(student);
    }

    // ��ʾ����ѧ����Ϣ
    void displayStudents() {
        cout << "����ѧ����Ϣ��" << endl;
        for (Student student : students) {
            student.printInfo();
            cout << endl;
        }
    }

    // ����ѧ����Ϣ
    void searchStudent(string name) {
        bool found = false;
        for (Student student : students) {
            if (student.getName() == name) {
                cout << "�ҵ�ѧ����Ϣ��" << endl;
                student.printInfo();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "δ�ҵ�ѧ����Ϣ��" << endl;
        }
    }
};

int main() {
    StudentManagementSystem sms;

    // ��Ӽ���ѧ��
    Student student1("����", 20, "����", "2023001");
    Student student2("����", 21, "�Ϻ�", "2023002");
    Student student3("����", 22, "����", "2023003");
    Student student4("����", 22, "��ɽ", "2023004");
    Student student5("����", 20, "̩ɽ", "2023005");
    Student student6("С��", 21, "����", "2023006");

    sms.addStudent(student1);
    sms.addStudent(student2);
    sms.addStudent(student3);
    sms.addStudent(student4);
    sms.addStudent(student5);
    sms.addStudent(student6);

    // ��ʾ����ѧ����Ϣ
    sms.displayStudents();

    // ����ѧ����Ϣ
    cout << "������Ҫ������ѧ������: ";
    string name;
    cin >> name;
    sms.searchStudent(name);

    return 0;
}