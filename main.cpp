#include <iostream>

using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
    // contains attributes and behaviors
    // all members here is private

    // access modifiers: private, public, project
    // private: hidden can not be access from outside
    // public: can access from outside
    // project: (inheritance)

    // everything below this modifier is private(optional)

    // 3 rules to create a contructor
    // 1: dont have return type
    // 2: have the same name as class
    // 3: public

    // 4 principles:
    //+ encapsulation:
    // grouped together within a class
    // prevent anyone outside directly access to our data

    //+ abtraction:
    // for smartphone: press a button to send a message, but for the company making the smartphone must work a lot to publish a message app
    // hiding complexity from user call abstraction
    // inherit virtual method from another class, this class need to specify that method

    //+ inheritance:
    // has the same attributes and class from the base class but it can has it own attributes and method

    //+ polymorphism:
    //has the same name as the base class method but the implementation is different

//virtual function: derived class can implement this function 
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    // encapsulation
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    // endl

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    void IntroduceYourself()
    {
        cout << "Name -" << Name << endl;
        cout << "Company -" << Company << endl;
        cout << "Age -" << Age << endl;
    }
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted" << endl;
        }
        else
        {
            cout << Name << " sorry no promotion for you!" << endl;
        }
    }
};

// this class inherit from emloyee class
class Developer : public Employee
{
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string language)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = language;
    }
    void FixBug()
    {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " Lesson";
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{
    Employee employee1("tran dai nien", "cong ty", 19);
    // employee1.Name = "Tran Dai Nien";
    // employee1.Company = "Nien";
    // employee1.Age = 19;
    // employee1.AskForPromotion();

    Employee employee2("nguyen thi my kim", "nha kim ne", 18);
    // employee2.Name = "Tran Dai Thang";
    // employee2.Company = "Thang";
    // employee2.Age = 25;
    // employee2.AskForPromotion();

    Developer d = Developer("nien", "youtube", 18, "c++");
    // d.FixBug();
    // d.AskForPromotion();
    Teacher t = Teacher("jack", "cool school", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();
}