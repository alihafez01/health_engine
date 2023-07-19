#include<iostream>
#include"oopTheoryFinalPr.h"
#include<fstream>
using namespace std;
int main()
{   
	int loopCount=-1;
	Patient	ptnt[30];
	cout<<"\n\n\t\t=================================================================\n";
	cout<<"\t\t\t\t\tWelcome\n\t\t\t\t\t  to \n\t\t\t\t  Al-Shifa Health Engine"<<endl;
	cout<<"\t\t=================================================================\n";
	cout<<"\n\n\t\t************ALL Basic Health requirements on the GO!!************\n"<<endl;
	bool programLoop = true;
	Medicine m1;
	Doctor dctr[6];
	dctr[0] = Doctor("Dr. ALi",32,"Male","viral infections","Flu's and fevers",15);
	dctr[1] = Doctor("Dr. Zainab",26,"Female","Kidney and Stomach","Kidney Related operates",7);
	dctr[2] = Doctor("Dr. Fazal Elahi",47,"Male","Cardiologist","Heart problem",22);
	dctr[3] = Doctor("Dr. Hussain",30,"Male","Head and Brain","Headaches",8);
	dctr[4] = Doctor("Dr. Ayesha",31,"Female","Pysioterapy","Muscles",9);
	/*Patient p1;
	p1.printdaata();
	Disease d1;
	d1.printDiseases();
	Medicine m1;
	m1.printMedicine();*/
	do{
		++loopCount;
		//menu of the program
		cout<<"Your basic health assistant is here!!\n"<<endl;
		cout<<"1.To add data of the patient"<<endl;
		cout<<"2.To add data of the doctor"<<endl;
		cout<<"3.To add data in the medicines"<<endl;
		cout<<"4.For prescription of the patient"<<endl;
		cout<<"5.To close the program "<<endl;
		cout<<"\nMake your desired selection: ";
		int choice;
		//choosing the option.
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					system("cls");
					//taking values from the user
					cout<<"Enter the name of the Patient: ";
					string nn;
					cin>>nn;
					cout<<"Enter the age of the Patient: ";
					int umr;
					cin>>umr;
					cout<<"Enter the gender of the patient: ";
					string gnd;
					cin>>gnd;
					cout<<"Enter the Disease that you are diagnosed: ";
					string dd;
					cin>>dd;
					//storing data using parameterized constructor by the use of array.
					ptnt[loopCount]=Patient(nn,umr,gnd,dd);													
				}
				break;
				case 2:
				{
					system("cls");
					ofstream docFile; //declaring file
					string line;
					docFile.open("Doctors.txt");	// declaring and opening the file.
					cout<<"Enter the Data of the Doctor"<<endl;
					cout<<"Don't forget to press 1 to return to main menu after entering Data"<<endl;
					while (docFile)
					{
						getline(cin, line);
						if (line == "1")
							break;
						docFile << line << endl;
					}
					docFile.close();
				}
				break;
				case 3:
				{
					system("cls");
					ofstream medFile;	//declaring file
					string line;
					medFile.open("Medicines.txt");	//opening the file
					cout<<"Enter the Data of the Medicines"<<endl;
					cout<<"Don't forget to press 1 to return to main menu after entering Data"<<endl;
					while (medFile)
					{
						getline(cin, line);
						if (line == "1")
							break;
						medFile << line << endl;
					}
					medFile.close();
				}
				break;
				case 4:
				{
					system("cls");
					//taking values from the user.
					cout<<"Enter the name of the Patient";
					string n;
					cin>>n;
					cout<<"Enter the age of the Patient";
					int um;
					cin>>um;
					cout<<"Enter the gender of the patient";
					string gd;
					cin>>gd;
					cout<<"Enter the Disease that you are diagnosed";
					string d;
					cin>>d;
					//storing data using parameterized constructor.
					ptnt[loopCount]=Patient(n,um,gd,d);
					//making the menu to ask about the symptums.
					cout<<"1.If you are feeling symptoms of Flu"<<endl;
					cout<<"2.If you are feeling symptoms of Fever"<<endl;
					cout<<"3.If have pain in your kidney"	<<endl;
					cout<<"4.If you are feeling unwell about your heart"<<endl;
					cout<<"5.If you have Headache  "<<endl;
					cout<<"6.If you have pulled your muscle"<<endl;
					cout<<"\nEnter your desired selection: ";
					int subchoice;
					//choosing the option.
					cin>>subchoice;
					switch(subchoice)
					{
						case 1:
							{
								cout<<"You must take the following medicine   :"<<m1.medicines[0]<<endl;
								ptnt[loopCount].printdaata();
							}
							break;
							case 2:
							{
								cout<<"You must take the following medicine   :"<<m1.medicines[1]<<endl;
								ptnt[loopCount].printdaata();
							}
							break;
							case 3:
							{
								cout<<"You must get these tests done and visit the doctor ASAP  :"<<m1.test<<endl;
								ptnt[loopCount].printdaata();
							}
							break;
							case 4:
							{
								cout<<"You must take the following medicine  :"<<m1.medicines[3]<<endl;
								ptnt[loopCount].printdaata();
							}
							break;
							case 5:
							{
								cout<<"You must take the following medicine  :"<<m1.medicines[4]<<endl;
								ptnt[loopCount].printdaata();
							}
							break;
							case 6:
							{
								cout<<"You must take the following medicine   :"<<m1.medicines[5]<<endl;
								ptnt[loopCount].printdaata();
							}
					}
					cout<<"Do you want an appointment with the Doctor?"<<endl;
					cout<<"Press 1 for Yes and 0 for no!"<<endl;
					int ch;
					//choosing the option.
					cin>>ch;
					switch(ch)
					{
						case 1:
							{
								if(subchoice==1||subchoice==2)
								{
									cout<<"Your Appointment is fixed with the following doctor "<<endl;
									cout<<"The Details of Doctors are "<<endl;
									cout<<dctr[0];
								}
								else if (subchoice==3)
								{
									cout<<"Your Appointment is fixed with the following doctor "<<endl;
									cout<<"The Details of Doctors are "<<endl;
									cout<<dctr[1];
								}
								else if(subchoice==4)
								{
									cout<<"Your Appointment is fixed with the following doctor "<<endl;
									cout<<"The Details of Doctors are "<<endl;
									cout<<dctr[2];
								}
								else if(subchoice==5)
								{
									cout<<"Your Appointment is fixed with the following doctor "<<endl;
									cout<<"The Details of Doctors are "<<endl;
									cout<<dctr[3];
								}
								else if(subchoice==6)
								{
									cout<<"Your Appointment is fixed with the following doctor "<<endl;
									cout<<"The Details of Doctors are "<<endl;
									cout<<dctr[4];
								}	
							}
							break;
							case 0:
								{
									break;
								}
					}
				}
				break;
				case 5:
				{
					system("cls");
					cout<<"\n\n\t\tThank You!!\n";
					programLoop=false;	
				}	
		}	
	}while(programLoop);	//the program loop end when the condition is falue	 		
}
