#include<iostream>
using namespace std;
// Create a Class Or Blue_Print Of Your Objecct
class Company {
    private:
        // Attributes of your class or varibles in pr. mode
        int EmpId;
        string EmpName;
        string ExpJobDesc;
        int Age;
        float Salary;
    public:
    // User Defined Constructor with Parameters  called parametised constructor.
        Company(int id,string name,string desc, int age,float salary){
            // Asign All values to class attribues.
            EmpId = id;
            EmpName = name;
            ExpJobDesc = desc;
            Age = age;
            Salary = salary;
        }
    void getDetails(){
            cout<<"Emp. Name :- "<<EmpName<<"\nEmp. Job :- "<<ExpJobDesc<<"\nEmp. Age :- "<<Age<<"\nSalary :- "<<Salary<<endl<<endl;
        }
};
int main(){
    Company object = Company(2966,"Abhay SIngh","Student",19,50000);
    Company object2 = Company(2967,"Radhey Singh","Student",18,1000);
    object.getDetails();
    object2.getDetails();
}
