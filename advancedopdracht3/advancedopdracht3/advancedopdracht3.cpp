
#include <iostream>
#include "Module.h"
int main()
{
	Module module1 = Module("wiskunde",3);
	Module module2 = Module("art",4);
	Module module3 = Module("taal",1);

	Docent docent1 = Docent("mr evens");
	Docent docent2 = Docent("mvr gies");
	Docent docent3 = Docent("mr van het veld");

	Student student1 = Student("pieter");
	Student student2 = Student("jan");
	Student student3 = Student("susan");
	Student student4 = Student("jake");
	Student student5 = Student("laura");
	Student student6 = Student("kevin");
	Student student7 = Student("sara");
	Student student8 = Student("dirk");
	Student student9 = Student("boris");
	Student student10 = Student("clara");


	module1.addDocent(docent1);
	module2.addDocent(Docent(docent2));
	module3.addDocent(Docent(docent3));

	module1.addStudent(Student(student1));
	module1.addStudent(Student(student2));
	module1.addStudent(Student(student3));
	module1.addStudent(Student(student4));

	module2.addStudent(Student(student5));
	module2.addStudent(Student(student6));
	module2.addStudent(Student(student7));
	
	module3.addStudent(Student(student8));
	module3.addStudent(Student(student9));
	module3.addStudent(Student(student10));

	module1.list();
	module2.list();
	module3.list();

	module1.setEc(56);
	module1.list();
	module2.list();
	module3.list();

	module1.deleteStudent();
	module1.list();
	module2.list();
	module3.list();
}

