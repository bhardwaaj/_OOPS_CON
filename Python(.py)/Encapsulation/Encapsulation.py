
class Company:
    # this a constructor used to define your class attributes.
    def __init__(self):
        self.EmpId = 0
        self.EmpName = ""
        self.EmpJob = ""
        self.Age = 0
    # create Our Method (Special Method) To initialize our Attributes of class 
    def __init__(self,id,name,job,age):
        self.EmpId = id
        self.EmpName = name
        self.EmpJob = job
        self.Age = age
    # crete a Method. to get details of Employee
    def getDetails(self):
        print(f"Emp Id :- {self.EmpId}\nEmp. Name :- {self.EmpName}\nEmp. Job :- {self.EmpJob}\nEmp Age :- {self.Age}\n")

# main Function In Python 
if __name__ == "__main__":
    # object Creation 
    obj = Company(2966,"Abhay Singh","Student",19)
    obj2 = Company(2967,"Radhey Singh","Student",18)
    # getDetails Method called 
    obj.getDetails()
    obj2.getDetails()
