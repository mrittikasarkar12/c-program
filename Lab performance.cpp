#include<iostream>
using namespace std;

class person{
 protected:

 string name;
 int age;

 public:
    void inputperson(){

    cout<<"Enter name and age:"<<endl;
    getline(cin, name);
    cin>>age;
    }
};

class employee: public person{
protected:
    int employeeID;
    string department;

public:
    void inputEmployee(){
        inputperson();
        cout<<"Enter Department and EmployeeID:"<<endl;
        getline(cin, department);
        cin>>employeeID;


    }

};


class faculty: public employee{
protected:
    string designation;
    double salary;

public:
    void inputfaculty(){
        inputEmployee();

   cout<<"Enter designation and salary:"<<endl;
   getline(cin, designation);
   cin>>salary;

    }

 void display(){
 cout<<"Name:"<<name<<endl;
 cout<<"Age:"<<age<<endl;
 cout<<"EmployeeID:"<<employeeID<<endl;
 cout<<"Department:"<<department<<endl;
 cout<<"Designation:"<<designation<<endl;
 cout<<"Salary:"<<salary<<endl;
    }



};


int main(){
faculty g;

g.inputfaculty();
g.display();

return 0;


}











