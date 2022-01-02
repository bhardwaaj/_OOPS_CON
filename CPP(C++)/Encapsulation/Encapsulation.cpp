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
        // set private data types using functions.
        void setEmpID(int id){
            EmpId = id;
        }
        void setEmpName(string name){
            EmpName = name;
        }
        void setEmpJobDesc(string desc){
            ExpJobDesc = desc;
        }
                void setAge(int age){
            Age = age;
        }
                void setSalary(float salary){
            Salary = salary;
        }
        // wappiing the data and function together
        // we can also use contructors too.
        void getDetails(){
            cout<<"Emp. Name :- "<<EmpName<<"\nEmp. Job :- "<<ExpJobDesc<<"\nEmp. Age :- "<<Age<<"\nSalary :- "<<Salary<<endl;
        }
};
int main(){
    Company object;
    object.setEmpID(2966);
    object.setEmpName("Abhay Singh");
    object.setEmpJobDesc("Student");
    object.setAge(19);
    object.setSalary(50000);  
    object.getDetails();
}
