#include<iostream>
class Student
{
private: // private data member
int rollno;
public:
// public function to get value of rollno - getter
int getRollno()
{
return rollno;
}
// public function to set value for rollno - setter
void setRollno(int x)
{
rollno=x;
}
};
int main()
{
Student A;/* 
A.rollno = 1; //Compile time error
std::cout<< A.rollno; //Compile time error */
A.setRollno(1); //Rollno initialized to 1 
std::cout<< A.getRollno(); //Output will be 1 
}