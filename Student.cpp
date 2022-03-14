#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void student::assignDetails(int ID , char Pname[])   
{
  studentID = id;

  strcpy(name , Pname);
 
}

// Display StudentId and Name
void display()
{
  cout<<"The student Id is"<<studentID<<endl;
  cout<<"The student name is"<<Pname<<endl;
  
}
