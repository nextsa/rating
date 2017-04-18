//Подсчет рейтинга
#include "student.h"
#include <iostream>
#include <fstream>
#include <set>

using namespace std;
int main()
{
/*	Student st1;
	st1.set_surname("John");
	cout<<st1.get_surname()<<endl;

	vector<double> mrk {90, 56, 20, 16, 78};
	st1.set_marks(mrk);
	const vector<double>& vout = st1.get_marks();
	cout<<"Marks: ";
	for (int i = 0; i < vout.size(); i++)
	{
		cout<<vout[i]<<" ";
	}
	cout<<endl;
*/
	
//	group.insert (st1);
	
//	cout<<"Average: "<<st1.average()<<endl;

	ifstream infile;
	infile.open("students.txt");

	set<Student> group;
	const int n_marks = 5;
	int grs = 0;
	infile>>grs;

	for (int ii = 0; ii < grs; ii++)
	{
		Student st;

		string name;
		infile>>name;
		cout<<name<<": ";
				
		st.set_surname(name);

		vector<double> b;
		for (int i = 0; i < n_marks; i++)
		{
			double c = 0;
			infile>>c;
			b.push_back(c);
		}
		for (int i = 0; i < n_marks; i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;

		st.set_marks(b);
	
		group.insert (st);
		
	}

	double minmark = 0;
	infile>>minmark;

	cout<<"\nСтуденты с проходным баллом больше "<<minmark<<":"<<endl;

	for(auto st : group)
	{
    	if (st.get_average() > minmark)
		{
			cout << st.get_surname() << ": " << st.get_average() << endl;
		}
	}

	infile.close();
	
}
