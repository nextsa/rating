//Реализация класса

#include "student.h"

void Student::set_surname(const string& name)
{
	m_surname = name;
}
const string& Student::get_surname () const
{
	return m_surname;
}

void Student::set_marks(const vector<double>& marks)
{
	m_marks = marks;
	average();
}
const vector<double>& Student::get_marks () const
{
	return m_marks;
}

double Student::get_average() const
{
	return m_average;
}

void Student::average()
{
	int a = 0;
	double sum = 0;
	for (int i = 0; i < m_marks.size(); i++)
	{
		a++;
		sum +=m_marks[i];
	}
	m_average = sum/a;
}

bool Student::operator<(const Student& st) const
{
	return (m_average > st.get_average());
}

