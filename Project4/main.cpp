#include<iostream>
using namespace std;
class Person 
{
protected:
    string name;
    int age;
public:
    Person() = default;
    Person(const char* n, int a)
    {
        name.append(n);
        age = a;
    }
    void Input()
    {
        cout << "Enter name -> ";
        cin >> name;
        cout << "Enter age -> ";
        cin >> age;
    }
    void Output()
    {
        cout << "Name: " << name << "\t Age: " << age << endl;
    }
};
class Student :public Person
{
    string Academy;
public:
    Student() :Person() {}
    Student(const char* n, int a, const char* Ac) :Person(n, a)
    {
        Academy.append(Ac);
    }
    void Input() 
    {
        Person::Input(); 
        cout << "Enter Academy : ";
        cin >> Academy;
    }
    void Output()
    {
        Person::Output();
        cout << "Academy: " << Academy << endl;
    }
};

class Director :public Person
{
    string school;
    double salary;
public:
    Director() :Person() {}
    Director(const char* n, int a, const char* sc, double sal) :Person(n, a)
    {
        school.append(sc);
        salary = sal;
    }
    void Input()
    {
        Person::Input();
        cout << "Enter school : ";
        cin >> school;
        cout << "Enter salary : ";
        cin >> salary;
    }
    void Output()
    {
        Person::Output();
        cout << "School: " << school << "\t Salary: " << salary << endl;
    }
};

class Doctor :public Person
{
    int hospital;
    double salary;
public:
    Doctor() :Person() {}
    Doctor(const char* n, int a, int hos, double sal) :Person(n, a)
    {
        hospital = hos;
        salary = sal;
    }
    void Input()
    {
        Person::Input();
        cout << "Enter number of hospital : ";
        cin >> hospital;
        cout << "Enter salary : ";
        cin >> salary;
    }
    void Output()
    {
        Person::Output();
        cout << "Hospital: " << hospital << "\t Salary: " << salary << endl;
    }
};

class Teacher :public Person
{
    string school;
    string subject;
public:
    Teacher() :Person() {}
    Teacher(const char* n, int a, const char* sc, const char* sub,) :Person(n, a)
    {
        school.append(sc);
        subject.append(sub);
    }
    void Input()
    {
        Person::Input();
        cout << "Enter school : ";
        cin >> school;
        cout << "Enter subject : ";
        cin >> subject;
    }
    void Output()
    {
        Person::Output();
        cout << "School: " << school << "\t Subject: " << subject << endl;
    }
};

int main()
{
    Student obj1("Irina", 20, "ItStep Avademy");
    obj1.Output();
    obj1.Input();
    obj1.Output();

    Director obj2("Arina", 45, "ItStep School", 40.000);
    obj2.Output();
    obj2.Input();
    obj2.Output();

    Doctor obj3("Anatolij", 32, 3, 20.000);
    obj3.Output();
    obj3.Input();
    obj3.Output();

    Teacher obj4("Karina", 34, "ItStep School", 30.000);
    obj4.Output();
    obj4.Input();
    obj4.Output();
}
