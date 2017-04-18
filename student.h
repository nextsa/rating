//Class
#ifndef MY_STUDENT_HEADER //для включения .h файла только один раз
#define MY_STUDENT_HEADER

#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Student
{
public:
	const string& get_surname () const;
	const vector<double>& get_marks () const;
	void set_surname(const string& name);
	void set_marks(const vector<double>& marks);
	double get_average() const;
	bool operator<(const Student& st) const;
	
private:
	void average ();
		
private:
	string m_surname;
	vector<double> m_marks;
	double m_average;
};
#endif
