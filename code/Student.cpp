#include "Student.h"
#include<string>

Student::Student(int studid,string name,int mark1,int mark2,int mark3)
{
	this->studid = studid;
	this->name = name;
	this->mark1 = mark1;
	this->mark2=mark2;
	this->mark3=mark3;
}
Student::void calMarks(){
	total = mark1+mark2+mark3;
	percentage = (double)total/3;
	cout<<"Total= "<<total<<"Percentage= "<<percentage;
}

Student::~Student()
{
}
