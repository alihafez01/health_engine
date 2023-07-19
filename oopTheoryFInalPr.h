#include <iostream>
#include <string>
#include<iomanip>
#include<conio.h>
using namespace std;
class Patient
{
	public:
		string name;
		int age;
		string gender;
		string disease;
		static int count;
	public:
		Patient();		//default constructor
		Patient(string pname, int page, string pgender,string pDisease);	//parameterized constructor
		// here are some getter setters for the private attributes.
		void setname(string name);
		void setage(int age);
		void setgender(string gender);
		string getname();
		int getage();
		string getgender();
		void printdaata();	//function to show the data
		static int getCount()
		{
			return count;
		}
};
//here function are defined outside the class.
Patient::Patient()
{
	name = "Not specified";
	age = 0;
	gender = "Not specified";
	disease = "Not specified";
	count++;
}
int Patient::count=0;
Patient::Patient(string pname, int page, string pgender,string pDisease)
{
	this->name = pname;
	this->age = page;
	this->gender = pgender;
	this->disease= pDisease;
}
void Patient::setname(string name)
{
	this->name = name;
}
void Patient::setage(int age)
{
	this->age = age;
}
void Patient::setgender(string gender)
{
	this->gender = gender;
}
string Patient::getname()
{
	return name;
}
int Patient::getage()
{
	return age;
}
string Patient::getgender()
{
	return gender;
}
void Patient::printdaata()
{
	cout<<"The Name of the patient is    	: "<<name<<endl;
	cout<<"The Age of the Patient is     	: "<<age<<endl;
	cout<<"The Gender of the Patient is  	: "<<gender<<endl;
	cout<<"The Patient is diagnosed with 	: "<<disease<<endl;
}
class Doctor
{
	public:
		string doctorName;
		int doctorAge;
		string doctorGender;
		string doctorField;
		string doctorSpecialization;
		float doctorExperience;
	public:
		Doctor();	//default constructor
		Doctor(string name, int age, string gender, string field, string specialization, float experience);	//parameterized constructor
		// here are some getter setters for the private attributes.
		void setname(string doctorName);
		void setage(int doctorAge);
		void setgender(string doctorGender);
		void setfield(string doctorField);
		void setspecialization(string doctorSpecialization);
		void setexperience(float doctorExperience);
		string getname();
		int getage();
		string getgender();
		string getfield();
		string getspecialization();
		float getexperience();
		//function to show the data
		void showdata();
};
//here functions are defined outside the class.
ostream & operator << (ostream &out, const Doctor &d)
{
    out<<"The Name of the Doctor is         	: "<<d.doctorName<<endl;
	out<<"The Age of the Doctor is          	: "<<d.doctorAge<<endl;
	out<<"The Gender of the Doctor is       	: "<<d.doctorGender<<endl;
	out<<"The Field of the Doctor is        	: "<<d.doctorField<<endl;
	out<<"The Doctor is Specialized in      	: "<<d.doctorSpecialization<<endl;
	out<<"The Experience of the Doctor is   	: "<<d.doctorExperience<<endl;
    return out;
}
Doctor::Doctor()
{
	doctorName = "Not speified";
	doctorAge = 0;
	doctorGender = "Not specified";
	doctorField = "Not specified";
	doctorSpecialization = "Not specified";
	doctorExperience = 0;	
} 
Doctor::Doctor(string name, int age, string gender, string field, string specialization, float experience)
{
	this->doctorName = name;
	this->doctorAge = age;
	this->doctorGender = gender;
	this->doctorField = field;
	this->doctorSpecialization = specialization;
	this->doctorExperience = experience;	
}
void Doctor::setname(string doctorName)
{
	this->doctorName = doctorName;
}
void Doctor::setage(int doctorAge)
{
	this->doctorAge = doctorAge;
}
void Doctor::setgender(string doctorGender)
{
	this->doctorGender = doctorGender;
}
void Doctor::setfield(string doctorField)
{
	this->doctorField = doctorField;
}
void Doctor::setspecialization(string doctorSpecialization)
{
	this->doctorSpecialization = doctorSpecialization;
}
void Doctor::setexperience(float doctorExperience)
{
	this->doctorExperience = doctorExperience;
}
string Doctor::getname()
{
	return doctorName;
}
int Doctor::getage()
{
	return doctorAge;
}
string Doctor::getgender()
{
	return doctorGender;
}
string Doctor::getfield()
{
	return doctorField;
}
string Doctor::getspecialization()
{
	return doctorSpecialization;
}
float Doctor::getexperience()
{
	return doctorExperience;
}
void Doctor::showdata()
{
	cout<<"Name of the Doctor         : "<<doctorName<<endl;
	cout<<"Age of the Doctor          : "<<doctorAge<<endl;
	cout<<"Gender of the Doctor       : "<<doctorGender<<endl;
	cout<<"Field of the Doctor        : "<<doctorField<<endl;
	cout<<"Specialization of Doctor   : "<<doctorSpecialization<<endl;
	cout<<"Experience of the Doctor   : "<<doctorExperience<<endl;
}
class Disease
{
	string diseases[6];
	public:
		//some getter setters.
		void setDiseases(string pDiseases[6]);
		string getDiseases();
		void printDiseases();
		Disease();	// default constructor
};
Disease::Disease() : diseases{ "Flu","Fever","Kidney Problem","Heart","HeadAche","Muscles" } 	// default constructor
{
}
/*Disease::Disease()
{
	string diseases[6]={"Flu","Fever","Kidney Problem","Heart","HeadAche","Muscles"};
}*/
void Disease::setDiseases(string pDiseases[6])
{
	this->diseases[6]= pDiseases[6];
}
string Disease::getDiseases()
{
	return diseases[6];
}
void Disease::printDiseases()
{
	cout<<"\nSelect the Disease whose Symptoms you are Feeling\n"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<diseases[i]<<endl;
	}
}
/*ostream & operator << (ostream &out, const Disease &d)
{
    out<<d.diseases[0]<<endl;
    out<<d.diseases[1]<<endl;
    out<<d.diseases[2]<<endl;
    out<<d.diseases[3]<<endl;
    out<<d.diseases[4]<<endl;
    out<<d.diseases[5]<<endl;
    out<<d.diseases[6]<<endl;
    return out;
}*/
class Medicine
{
	Patient *patients;
	public:
		string medicines[6];
		string test;
		Medicine();
		void printMedicine();
};
Medicine::Medicine() : medicines{"Panadol CF","Nuberol Forts","Tests recommended","Legzotanil","Panadols","acetaminophen (Tylenol)" } 
{
	test ="ACR & GFR";
}
void Medicine::printMedicine()
{
	for(int i=0;i<6;i++)
	{
		cout<<medicines[i]<<endl;
	}
	cout<<"Name of the patient        : "<<patients->name<<endl;
	cout<<"Age of the Patient         : "<<patients->age<<endl;
	cout<<"Gender of the Patient      : "<<patients->gender<<endl;
	cout<<"Patient is diagnosed with  : "<<patients->disease<<endl;
}


