#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void login();
void reg();
void fp();
int set_file();
int edit_file();
int get_file();
void menu_2();

class Data
{
	public:
		char *fname = (char *)malloc(sizeof(char)* 100);
		char *lname = (char *)malloc(sizeof(char)* 100);
		char *father_name = (char *)malloc(sizeof(char)* 100);
		int  cnic;  
		char *province = (char *)malloc(sizeof(char)* 100);
		char *city = (char *)malloc(sizeof(char)* 100);
		char *address = (char *)malloc(sizeof(char)* 100);
		char *email = (char *)malloc(sizeof(char)* 100);
		char *program = (char *)malloc(sizeof(char)* 100);
		int age;
		char *ssc_dis = (char *)malloc(sizeof(char)* 100);
		char *hssc_dis = (char *)malloc(sizeof(char)* 100);
		int ssc_marks;
		int hssc_marks;
		int contact;


Data()
{


}

void set_data()
{
	system("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t                 Data Input Menu        \n\n\n";
	cout<<"\t\t\t______ Please Fill the Following Fields _______\n\n";
	cout<<"                                                    \n\n";
	cout<<"\t\t\t| First Name: ";
	{
	char a;
	int i=0;
	while (a!='\n')
	{
		a=getchar();
		fname[i++]=a;
	}
	fname[i]='\0';
	}
	cout<<"\t\t\t| Last Name: ";
	{
	char b;
	int i=0;
	while (b!='\n')
	{
		b=getchar();
		lname[i++]=b;
	}
	lname[i]='\0';
	}
	cout<<"\t\t\t| Father's / Guardian's Name: ";
	{
	char c;
	int i=0;
	while (c!='\n')
	{
		c=getchar();
		father_name[i++]=c;
	}
	father_name[i]='\0';
	}
	
	cout<<"\t\t\t| Enter Your Province: ";
	{
	char d;
	int i=0;
	while (d!='\n')
	{
		d=getchar();
		province[i++]=d;
	}
	province[i]='\0';
	}
	cout<<"\t\t\t| Enter Your City: ";
	{
	char e;
	int i=0;
	while (e!='\n')
	{
		e=getchar();
		city[i++]=e;
	}
	city[i]='\0';
	}
	cout<<"\t\t\t| Enter Your Address: ";
	{
	char f;
	int i=0;
	while (f!='\n')
	{
		f=getchar();
		address[i++]=f;
	}
	address[i]='\0';
	}
	cout<<"\t\t\t| Enter Your Email: ";
	{
	char g;
	int i=0;
	while (g!='\n')
	{
		g=getchar();
		email[i++]=g;
	}
	email[i]='\0';
	}
	cout<<"\t\t\t| Enter Your Preferred Program: ";
	{
	char h;
	int i=0;
	while (h!='\n')
	{
		h=getchar();
		program[i++]=h;
	}
	program[i]='\0';
	}
	
	cout<<"\t\t\t| SSC Discipline: ";
	{
	char j;
	int i=0;
	while (j!='\n')
	{
		j=getchar();
		ssc_dis[i++]=j;
	}
	ssc_dis[i]='\0';
	}
	cout<<"\t\t\t| HSSC Discipline: ";
	{
	char k;
	int i=0;
	while (k!='\n')
	{
		k=getchar();
		hssc_dis[i++]=k;
	}
	hssc_dis[i]='\0';
	};
	cout<<"\t\t\t| SSC Marks: ";
	{
	cin>>ssc_marks;
	if (ssc_marks>1100)
	{
		cout<<"\t\t\t| Marks Must be out of 1100! \n";
		cout<<"\t\t\t| Enter Marks Again: ";
		cin>>ssc_marks;
	}
	}
	cout<<"\t\t\t| HSSC Marks: ";
	{
	cin>>hssc_marks;
	if (hssc_marks>1100)
	{
		cout<<"\t\t\t| Marks Must be out of 1100! \n";
		cout<<"\t\t\t| Enter Marks Again: ";
		cin>>hssc_marks;
	}
	}
	cout<<"\t\t\t| Contact Number: ";
	{
	cin>>contact;
	}
	
	cout<<"\t\t\t| CNIC: ";
	{
	cin>>cnic;
	}
	
	cout<<"\t\t\t| Enter Your Age: ";
	cin>>age;
	}

void get_data()
{
	system("cls");
	cout<<"\t\t\t _____________________________________ \n\n\n";
	cout<<"\t\t\t     Your Data is Displayed Below       \n\n";
	cout<<"\t\t\t| First Name: "<<fname<<"                              |\n";
	cout<<"\t\t\t| Last Name: "<<lname<<"                               |\n";
	cout<<"\t\t\t| Father's / Guardian's' Name: "<<father_name<<"       |\n";
	cout<<"\t\t\t| CNIC: "<<cnic<<"                                     |\n";
	cout<<"\t\t\t| Province: "<<province<<"                             |\n";
	cout<<"\t\t\t| City: "<<city<<"                                     |\n";
	cout<<"\t\t\t| Address: "<<address<<"                               |\n";
	cout<<"\t\t\t| Email: "<<email<<"                                   |\n";
	cout<<"\t\t\t| Preferred Program: "<<program<<"                     |\n";
	cout<<"\t\t\t| Age: "<<age<<"                                       |\n";
	cout<<"\t\t\t| SSC Discipline: "<<ssc_dis<<"                        |\n";
	cout<<"\t\t\t| HSSC Discipline: "<<hssc_dis<<"                      |\n";
	cout<<"\t\t\t| SSC Marks: "<<ssc_marks<<"                           |\n";
	cout<<"\t\t\t| HSSC Marks: "<<hssc_marks<<"                         |\n";
	cout<<"\t\t\t| Contact Number: "<<contact<<"                        |\n";
}
void edit_data()
{
	int choice;
	system("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t                 Data Edit Menu        \n\n\n";
	cout<<"\t\t\t___ Please Select the Field You Want to Edit ___\n\n";
	cout<<"                                                     \n\n";
	cout<<"\t\t\t Press:\n";
	cout<<"\t\t\t| 1 for First Name \n";
	cout<<"\t\t\t| 2 for Last Name \n";
	cout<<"\t\t\t| 3 for Father's / guardian's Name \n";
	cout<<"\t\t\t| 4 for CNIC \n";
	cout<<"\t\t\t| 5 for Province \n";
	cout<<"\t\t\t| 6 for City \n";
	cout<<"\t\t\t| 7 for Address \n";
	cout<<"\t\t\t| 8 for Email \n";
	cout<<"\t\t\t| 9 for Preferred Program \n";
	cout<<"\t\t\t| 10 for Age \n";
	cout<<"\t\t\t| 11 for SSC Discipline \n";
	cout<<"\t\t\t| 12 for HSSC Discipline \n";
	cout<<"\t\t\t| 13 for SSC Marks \n";
	cout<<"\t\t\t| 14 for HSSC Marks \n";
	cout<<"\t\t\t| 15 for Contact Number \n";
	cout<<"\t\t\t| 16 to Return to Account Menu \n";
	
	cin>>choice;
	
	switch (choice)
	{
	case 1:
	
	system ("cls");
	cout<<"\t\t\t| Enter New First Name: ";
	{
	
	char a;
	int i=0;
	while (a!='\n')
	{
	a=getchar();
	fname[i++]=a;
	}
	fname[i]='\0';
	}
	edit_data();
	break;
	
	case 2:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Last Name: ";
	
	{
	
	char b;
	int i=0;
	while (b!='\n')
	{
	b=getchar();
	lname[i++]=b;
	}
	lname[i]='\0';
	}
	edit_data();
	break;
	
	case 3:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Father's / Guardian's'' Name: ";
	{
	char c;
	int i=0;
	while (c!='\n')
	{
	c=getchar();
	father_name[i++]=c;
	}
	father_name[i]='\0';
	}
	edit_data();
	break;
	
	case 4:
	
	system ("cls");
	cout<<"\t\t\t| Enter New CNIC: ";
	{
	cin>>cnic;
	}
	edit_data();
	break;
	
	case 5:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Province: ";
	{
	char d;
	int i=0;
	while (d!='\n')
	{
	d=getchar();
	province[i++]=d;
	}
	province[i]='\0';
	}
	edit_data();
	break;
	
	case 6:
	
	system ("cls");
	cout<<"\t\t\t| Enter New City: ";
	{
	char e;
	int i=0;
	while (e!='\n')
	{
	e=getchar();
	city[i++]=e;
	}
	city[i]='\0';
	}
	edit_data();
	break;
	
	case 7:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Address: ";
	{
	char f;
	int i=0;
	while (f!='\n')
	{
	f=getchar();
	address[i++]=f;
	}
	address[i]='\0';
	}
	edit_data();
	break;
	
	case 8:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Email: ";
	{
	char g;
	int i=0;
	while (g!='\n')
	{
	g=getchar();
	email[i++]=g;
	}
	email[i]='\0';
	}
	edit_data();
	break;
	
	case 9:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Preferred Program: ";
	{
	char h;
	int i=0;
	while (h!='\n')
	{
	h=getchar();
	program[i++]=h;
	}
	program[i]='\0';
	}
	edit_data();
	break;
	
	case 10:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Age: ";
	{
	cin>>age;
	}
	edit_data();
	break;
	
	case 11:
	
	system ("cls");
	cout<<"\t\t\t| Enter New SSC Discipline: ";
	{
	char j;
	int i=0;
	while (j!='\n')
	{
	j=getchar();
	ssc_dis[i++]=j;
	}
	ssc_dis[i]='\0';
	}
	edit_data();
	break;
	
	case 12:
	
	system ("cls");
	cout<<"\t\t\t| Enter New HSSC Discipline: ";
	{
	char k;
	int i=0;
	while (k!='\n')
	{
	k=getchar();
	hssc_dis[i++]=k;
	}
	hssc_dis[i]='\0';
	}
	edit_data();
	break;
	
	case 13:
	
	system ("cls");
	cout<<"\t\t\t| Enter New SSC Marks: ";
	{
	cin>>ssc_marks;
	if (ssc_marks>1100)
	{
	cout<<"\t\t\t| Marks Must be out of 1100! \n";
	cout<<"\t\t\t| Enter Marks Again: ";
	cin>>ssc_marks;
	}
	}
	edit_data();
	break;
	
	case 14:
	
	system ("cls");
	cout<<"\t\t\t| Enter New HSSC Marks: ";
	{
	cin>>hssc_marks;
	if (hssc_marks>1100)
	{
	cout<<"\t\t\t| Marks Must be out of 1100! \n";
	cout<<"\t\t\t| Enter Marks Again: ";
	cin>>hssc_marks;
	}
	}
	edit_data();
	break;
	
	case 15:
	
	system ("cls");
	cout<<"\t\t\t| Enter New Contact Numbers: ";
	{
	cin>>contact;
	}
	edit_data();
	break;
	
	case 16:
	menu_2();
	break;
	
	default:
	cout<<"\n\t\t\t Invalid Input!";
	edit_data();
	}
	}

};


int main()
{
	system ("cls");
	int choice;
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t      Welcome to The Common Application       \n\n\n";
	cout<<"\t\t\t______            Main Menu            _______\n\n";
	cout<<"                                                    \n\n";
	cout<<"\t| Press 1 to Login                           |"<<endl;
	cout<<"\t| Press 2 for Registration                   |"<<endl;
	cout<<"\t| Press 3 if you have forgot your Password   |"<<endl;
	cout<<"\t| Press 4 to exit                            |"<<endl;
	cout<<"\n\t Enter from the options above: ";
	
	cin>>choice;
	cout<<endl;
	
	switch (choice)
		{
		case 1:
		login();
		break;
		
		case 2:
		reg();
		break;
		
		case 3:
		fp();
		break;
		
		case 4:
		cout<<"\t\t\t Thank You! \n\n";
		
		break;
		
		default:
		system("cls");
		cout<<"\t\t\t Invalid Input! Select from the above options \n\n";
		main();
		}
	return 0;
}

int set_file()
{
	ofstream file_obj;
	Data obj;
	file_obj.open("User Data.txt",ios::app);
	if (!file_obj)
	{
	cout<<"\t\t\t There was an error while creating the file!";
	return 0;
	}
	obj.set_data();
	file_obj.write((char*)&obj, sizeof(obj));
	file_obj.close();
	menu_2();
	return 0;
}

int edit_file()
{
	ofstream file_obj;
	Data obj;
	file_obj.open("User Data.txt",ios::app);
	if (!file_obj)
	{
	cout<<"\t\t\t There was an error while creating the file!";
	return 0;
	}
	obj.edit_data();
	file_obj.write((char*)&obj, sizeof(obj));
	file_obj.close();
	menu_2();
	return 0;
}

int get_file()
{
	ifstream file_obj;
	Data obj;
	file_obj.open("User Data.txt",ios::in);
	if (!file_obj)
	{
	cout<<"\t\t\t There was an error while opening the file!";
	return 0;
	}
	file_obj.read((char*)&obj, sizeof(obj));
	obj.get_data();
	file_obj.close();
	menu_2();
	return 0;
}


void ec()
{
	ifstream file_obj;
	Data obj;
	file_obj.open("User Data.txt",ios::in);
	if (!file_obj)
	{
	cout<<"\t\t\t There was an error while opening the file!";
	
	}
	file_obj.read((char*)&obj, sizeof(obj));
	//obj.get_data();
	int choice;
	cout<<"\t\t\t Choose your province from the following. Enter your choice as 1,2,3 ..."<<endl;
	cout<<"\t\t\t 1. Punjab"<<endl;
	cout<<"\t\t\t 2. KPK"<<endl;
	cout<<"\t\t\t 3. Sindh"<<endl;
	cout<<"\t\t\t 4. Balochistan"<<endl;
	cout<<"\t\t\t 5. Federal Capital"<<endl;
	cin >> choice;
	
	switch (choice)
	{
	
		case 1:
		system ("cls");
		      if(obj.hssc_marks > 950)
		           cout<<"\t\t\t You are eligible for UET Lahore & University Of Punjab .Good Luck! "<<endl;
		      else if(obj.hssc_marks< 950&& obj.hssc_marks> 850)
		            cout<<"\t\t\t You are eligible for LUMS and UMT Lahore. Good luck! "<<endl;
		      else
		            cout<<"\t\t\t You are eligible for Pak-AIMS Lahore and MNSUAM Multan . Good luck!"<<endl;
		           
		    break;
		   
		    case 2:
		    system ("cls");
		      if(obj.hssc_marks> 950)
		           cout<<"\t\t\t You are eligible for UET Peshawar & University Of Peshawar .Good Luck! "<<endl;
		      else if(obj.hssc_marks< 950 && obj.hssc_marks> 850)
		            cout<<"\t\t\t You are eligible for Abasyn University and Islamia college Peshawar. Good luck! "<<endl;
		      else
		            cout<<"\t\t\t You are eligible for Sarhad University and University of Swat. Good luck!"<<endl;
		           
		    break;
		   
		    case 3:
		    system ("cls");
		      if(obj.hssc_marks> 950)
		           cout<<"\t\t\t You are eligible for Aga Khan University & NED University of Engineering and Technology .Good Luck! "<<endl;
		      else if(obj.hssc_marks< 950&& obj.hssc_marks> 850)
		            cout<<"\t\t\t You are eligible for University of Sindh Jamshoro and Iqra University Karachi. Good luck! "<<endl;
		      else
		            cout<<"\t\t\t You are eligible for Greenwich University and Shaheed Benazir Bhutto City University Karachi. Good luck!"<<endl;
		           
		    break;
		   
		case 4:
		system ("cls");
		      if(obj.hssc_marks> 950)
		           cout<<"\t\t\t You are eligible for Balochistan University of Information Technology, Engineering and Management Sciences & University Of Balochistan .Good Luck! "<<endl;
		      else if(obj.hssc_marks< 950&& obj.hssc_marks> 850)
		            cout<<"\t\t\t You are eligible for Balochistan University of Engineering and Technology Khuzdar and University of Turbat ,Turbat. Good luck! "<<endl;
		      else
		            cout<<"\t\t\t You are eligible for University of Loralai and Al-Hamd Islamic University Quetta. Good luck!"<<endl;
		           
		    break;
		 
		   case 5:
		    system ("cls");
		      if(obj.hssc_marks> 950)
		           cout<<"\t\t\t You are eligible for Quaid-i-Azam University & COMSATS Institute of Information Technology .Good Luck! "<<endl;
		      else if(obj.hssc_marks< 950&& obj.hssc_marks> 850)
		            cout<<"\t\t\t You are eligible for Air University and Institute of Space Technology. Good luck! "<<endl;
		      else
		            cout<<"\t\t\t You are eligible for National University of Technology - Islamabad and Foundation University Islamabad. Good luck!"<<endl;
		           
		    break;
		}
			int ch;
			cout<<"\n\t\t\t Press 1 to go back : ";
			cin>>ch;
			while (ch!=1)
			{
				cout<<"\n\t\t\t Press 1 : ";
				cin>>ch;
			}
			menu_2();
}


void login()
{
	int count;
	string userId, password, id, pass;
	system ("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t                   Login Menu                 \n\n";
	cout<<"                                                    \n\n";
	cout<<"\t\t\t Please enter Username and Password: "<<endl;
	cout<<"\n\t\t\t USERNAME: ";
	cin>>userId;
	cout<<"\n\t\t\t PASSWORD: ";
	cin>>password;
	
	ifstream input ("Login Data.txt");
	
	while (input>>id>>pass)
		{
		if (id==userId && pass==password)
		{
		count = 1;
		system ("cls");
		}
		
		}
		
		input.close();
		
		if (count==1)
		{
		cout<<"\n\t\t\t"<<userId<<"\n\t\t\t Login Successful! \n";
		menu_2();
		}
		else
		{
		cout<<"\n\t\t\t Invalid Username or Password! Please Try Again \n";
		main();
		}
}

void reg()
{
	string ruserId, rpassword, rid, rpass;
	system("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t                 Registration Menu            \n\n";
	cout<<"                                                    \n\n";
	cout<<"\t\t\t Enter Username: ";
	cin>>ruserId;
	cout<<"\t\t\t Enter Password: ";
	cin>>rpassword;
	
	ofstream f1 ("Login Data.txt", ios::app);
	f1<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"\n\t\t\t Registration Successful! \n\t\t\t Thank You for Registering! \n";
	main();
}

void fp()
{
	int option;
	system("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t              Account Recovery Menu           \n\n";
	cout<<"                                                    \n\n";
	cout<<"\t\t\tPress 1 to search your ID by Username "<<endl;
	cout<<"\t\t\tPress 2 to go back to the Main Menu "<<endl;
	cout<<"\n\n\t\t\t Select from the above options: ";
	cin>>option;
	
	switch (option)
		{
		case 1:
		{
		int count = 0;
		string suserId, sId, spass;
		cout<<"\n\n\t\t\t Enter the Username: ";
		cin>>suserId;
		
		ifstream f2 ("Login Data.txt");
		while (f2>>sId>>spass)
		{
		if (sId==suserId)
		{
		count = 1;
		}
		}
		f2.close();
		if (count==1)
		{
		cout<<"\n\n\t\t\t Account Found! \n";
		cout<<"\n\n\t\t\t Your Password is "<<spass<<endl;
		
		}
		else
		{
		cout<<"\n\t\t\t Account not found! \\n";
		
		}
		break;
		}
		case 2:
		{
		main();
		}
		}
	}

void menu_2()
{
	Data obj;
	int choice;
	system("cls");
	cout<<"\t\t\t______________________________________________\n\n\n";
	cout<<"\t\t\t                Account Options           \n\n";
	cout<<"                                                    \n\n";
	cout<<"\t\t\tPress 1 to Enter Your Data "<<endl;
	cout<<"\t\t\tPress 2 to Edit Your Data "<<endl;
	cout<<"\t\t\tPress 3 to View Your Data "<<endl;
	cout<<"\t\t\tPress 4 to Check Your Eligibility "<<endl;
	cout<<"\t\t\tPress 5 to Go Back to Main Menu "<<endl;
	cout<<"\n\n\t\t\t Select from the above options: ";
	cin>>choice;
	
	switch (choice)
	{
		case 1:
		
		set_file();
		menu_2();
		break;
		
		
		case 2:
		
		edit_file();
		menu_2();
		break;
		
		
		case 3:
		
		get_file();
		
		break;
		
		case 4:
		
		ec();
		menu_2();
		break;
		
		
		case 5:
		
		main();
		break;
		
		default:
		cout<<"\n\t\t\t Invalid Input!";
		menu_2();
	}

}
