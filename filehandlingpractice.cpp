#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
	//Making files
  ofstream myfile;
  myfile.open ("example.txt");	
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
/*void Batch::setData(string pName,int pYear,int pnmbrOfCr,Course pCourses[5])
{
	for (int e = 0; e<5;e++)
	{
		courses[e]=pCourses[e];
	}
	name=pName;
	year=pYear;
	nmberOfcr=pnmbrOfCr;
}*
//courses = pCourses; 
				
/*for (int e = 0; e<5;e++)
{
courses[e]=pCourses[e];
}*/
