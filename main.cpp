#include <iostream>

using namespace std;

class Employee
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
    //for smartphone: press a button to send a message, but for the company making the smartphone must work a lot to publish a message app
    //hiding complexity from user call abstraction

private:
    string Name;
    string Company;
    int Age;

public:
//encapsulation
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
//endl

    
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
};

int main()
{
    Employee employee1("tran dai nien", "cong ty", 19);
    // employee1.Name = "Tran Dai Nien";
    // employee1.Company = "Nien";
    // employee1.Age = 19;
    employee1.IntroduceYourself();

    Employee employee2("nguyen thi my kim", "nha kim ne", 18);
    // employee2.Name = "Tran Dai Thang";
    // employee2.Company = "Thang";
    // employee2.Age = 25;
    employee2.IntroduceYourself();
}