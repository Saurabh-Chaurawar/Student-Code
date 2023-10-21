#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string.h>

class Student
{
	private: int studid,mark1,mark2,mark3;
		int total = 0;
		string name;
		double percentage;
	public:
		Student(int studid,string name,int mark1,int mark2,int mark3);
		void calMarks();
		
		~Student();
	
};

#endif
