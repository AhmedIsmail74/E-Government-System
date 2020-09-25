//DA ELY HNSLMO ISA ^^
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
public:
	//data members
	string name;
	string password;

};
class Citizen :public Person
{
public:
	vector<Person>citizens;
};

class owner :public Person
{
public:
	vector<Person>owners;
};

class Employee :public Person
{
	string empName;
	int empID;
public:
	void setName(string name) { empName = name; }
	void setID(int id) { empID = id; }
	string getName() { return empName; }
	int getID() { return empID;}
};
class Form
{
	string FormName;
	int FormID;
public:
	void setName(string name) { FormName = name; }
	void setID(int id) { FormID = id; }
	string getName() { return FormName; }
	int getID() { return FormID; }
};

class Department
{
public:
	string depName;
	vector<Form>depForm;
	vector<Employee>emp;
};

class Ministry
{
protected:
	int id;
	string name;
	
public:
	static int number_of_ministries;
	int number_of_dep;
	vector<Department>dep;
	string getString() {return this->name;}
	int getID() {return this->id;}
	void setString(string tempName)
	{
		this->name = tempName;
	}
	void setID(int tempId)
	{
		this->id = tempId;
	}
	Ministry()
	{
		number_of_dep = 1;
	}
	virtual void Form() = 0;

};
int::Ministry::number_of_ministries = 0;

class M_Interior:public Ministry
{
	
public:
	M_Interior(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Civil Status";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		cout << "Enter you name" << endl;
		string n;  cin >> n;
		cout << "Enter your national card number" << endl;
		int ncard; cin >> ncard;
		cout << "Renew done!" << endl;
	}

};

class M_Education :public Ministry 
{
public:
	M_Education(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Specific Stage";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		cout << "Enter you name" << endl;
		string n;  cin >> n;
		cout << "Enter your ID" << endl;
		int ID; cin >> ID;
		cout << "Link of Physics (2017) "<<endl<<"https://images.search.yahoo.com/search/images;_ylt=AwrBT6IrYeZaqjQA4hZXNyoA;_" << endl;
		cout << endl << "Link of Arabic (2017) "<<endl<< "https://images.search.yahoo.com/search/images;_ylt=AwrEwSzGZOZaoKsAhRKJzbkF;" << endl;
		cout << endl << "Link of Math (2017) " <<endl<< "https://images.search.yahoo.com/search/images;_ylt=AwrEwSjOZOZarmcAh.iJzbkF;_" << endl;
	}

}; 

class M_Finance :public Ministry
{
public:
	M_Finance(string name, int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Currency";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		cout << "Choose the currency you want to know:\n1)Dollar\n2)Euro\n3)Saudi Rial\n4)Kwaitan Dinar\n" << endl;
		int n;  cin >> n;
		if (n == 1)
		{
			cout << "18 LE" << endl;
		}
		else if (n == 2)
		{
			cout << "20 LE" << endl;
		}
		else if (n == 3)
		{
			cout << "4 LE" << endl;
		}
		else if (n == 4)
		{
			cout << "60 LE" << endl;
		}

	}
}; 

class M_Transportation :public Ministry
{
public:
	M_Transportation(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Train Schedule";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		cout << "Choose your destination" << endl;
		cout << "1)Alexandria\n2)Aswan\n3)Suez\n4)Damiatte" << endl;
		int n;  cin >> n;
		if (n == 1)
		{
			cout << "Trian 1 Leaves at 6PM---------------Train 2 Leaves at 10AM----------------Train 3 Leaves at 12AM" << endl;
		}
		else if (n == 2)
		{
			cout << "Trian 1 Leaves at 8PM---------------Train 2 Leaves at 2AM----------------Train 3 Leaves at 8AM" << endl;
		}
		else if (n == 3)
		{
			cout << "Trian 1 Leaves at 3PM---------------Train 2 Leaves at 12AM----------------Train 3 Leaves at 10AM" << endl;

		}
		else if (n == 4)
		{
			cout << "Trian 1 Leaves at 6AM---------------Train 2 Leaves at 2PM----------------Train 3 Leaves at 12AM" << endl;

		}
	}

};

class M_Tourism :public Ministry
{
public:
	M_Tourism(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Travels";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		cout << "Giza Pyramids,Location->Nazlet Al-Samman\nAlexandria Library,Location->Al-Shatby\nAboSombol Temple,Location->Luxor\nHighdam,Location->Aswan\n" << endl;

	}
};

class M_Electricity :public Ministry
{
public:
	M_Electricity(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Electricity Bills";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
	
			string name; int nationalcard; int Consume; int visa; int pass;
			cout << "Enter your name:" << endl;
			cin >> name;
			cout << "Enter your national card number:" << endl;
			cin >> nationalcard;
			cout << "Enter your Consume:" << endl;
			cin >> Consume;
			cout << "Your Bill is:" << Consume / 6 << " LE" << endl;
			int a;
			cout << "To pay press 1 " << endl;
			cout << "To Finish press 0 " << endl;
			cin >> a;
			if (a == 1)
			{
				cout << "Enter your Visa Card Number:" << endl;
				cin >> visa;
				cout << "Enter Password:" << endl;
				cin >> pass;
				cout << "Paying Done" << endl;
			}

	}
};

class M_Health :public Ministry
{
public:
	M_Health(string name,int ID)
	{
		this->name = name;
		id = ID;
		Department d1;
		d1.depName = "Quantity of Bloods";
		this->dep.push_back(d1);
		number_of_ministries++;
	}
	void Form()
	{
		int Bloodtype; string Location;
		cout << "Choose Your Blood type:\n1)A+\n2)A-\n3)B+\n4)O\n" << endl;
		cin >> Bloodtype;
		if (Bloodtype == 1)
		{
			cout << "Available on Manshyet Al-Sadr and Demerdash" << endl;
		}
		else if (Bloodtype == 2)
		{
			cout << "Available on Ramsys and Bolaq Abu-ALela" << endl;
		}
		else if (Bloodtype == 3)
		{
			cout << "Available on Embaba and Sraya AL-Qoba" << endl;
		}
		else if (Bloodtype == 4)
		{
			cout << "Available on Roxy and Abasseya" << endl;
		}
	}

};

Person p1;
Citizen c1;
owner o1;
Ministry * min[7];


void start()
{
	min[0] = new M_Education("Education", 1);
	min[1] = new M_Electricity("Electricty", 2);
	min[2] = new M_Finance("Finance", 3);
	min[3] = new M_Health("Health", 4);
	min[4] = new M_Interior("Interior", 5);
	min[5] = new M_Tourism("Tourism", 6);
	min[6] = new M_Transportation("Transportation", 7);

}

void Edit_ministry() //////////
{
	cout << "To Edit Information press 1 " << endl;
	cout << "To Edit Departments press 2 " << endl;
	int y;
	cin >> y;
	if (y==1)
	{
		int a;
		cout << "Enter ID of ministry you want to Edit: " << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << min[i]->getID() << "\t" << min[i]->getString() << endl;
		}
		cin >> a;
		for (int i = 0; i < 7; i++)
		{
			if (a == min[i]->getID())
			{
				cout << "Enter New Name : ";
				string name;
				cin >> name;
				min[i]->setString(name);
				cout << endl;
				cout << "Enter New ID : ";
				int  id;
				cin >> id;
				min[i]->setID(id);
				cout << "DONE !" << endl;
				for (int i = 0; i < Ministry::number_of_ministries; i++)
				{
					cout << min[i]->getID() << "\t" << min[i]->getString() << endl;
				}
			}
		}
	}
	else if(y==2)
	{
		int a;
		cout << "Enter ID of ministry you want to Edit: " << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << min[i]->getID() << "\t" << min[i]->getString() << endl;
		}
		cin >> a;
		for (int i = 0; i < 7; i++)
		{
			if (a == min[i]->getID())
			{
				int x;
				cout << "To add, Press 1 " << endl;
				cout << "To Remove, Press 2 " << endl;
				cin >> x;
				if (x == 1)
				{

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					string name;
					cout << "Enter name of Department you want to add \n";
					cin >> name;
					Department d1;
					d1.depName = name;
					min[i]->dep.push_back(d1);
					min[i]->number_of_dep++;
					cout << "Departments are : " << endl;

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}

				}
				else if (x == 2)
				{

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					string name;
					cout << "Enter name of Department you want to remove \n";
					cin >> name;

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						if (min[i]->dep[j].depName == name)
						{
							min[i]->dep.erase(min[i]->dep.begin() + j);
						}
					}
					cout << "Departments are : " << endl;
					if (min[i]->dep.size() == 0)
					{
						cout << "It's Empty !" << endl;
						break;
					}
					else
					{
						for (int j = 0; j < min[i]->dep.size(); j++)
						{
							cout << min[i]->dep[j].depName << endl;
						}
					}
				}


			}
		}
	 }
}
void sign_up()
{
	
	string name;
	string password;
	char a;
	cout << "Enter your name: ";
	cin >> name;
	p1.name = name;
	cout << "Enter your password: ";
	cin >> password;
	p1.password = password;
	while (true)
	{
		cout << "If you are citizen press 'C'\nIf you are owner press 'O'\n";
		cin >> a;
		if (a == 'C')
		{
			c1.citizens.push_back(p1);
			cout << "DONE!" << endl;
			cout << "Now go to Login please " << endl;
			cout << "---------------------------------------------------------------" << endl;
			break;
		}

		else if (a == 'O')
		{
			o1.owners.push_back(p1);
			cout << "DONE!" << endl;
			cout << "Now go to Login please " << endl;
			cout << "---------------------------------------------------------------" << endl;
			break;
		}
		else
		{
			cout << "Choose again please (C or O)" << endl;
		}
	}

}
int Owner()
{
	int a;  
	cout << "Press 1 : To Add Ministry" << endl;
	cout << "Press 2 : To Edit Ministry " << endl;
	cout << "Press 3 : To Remove Ministry" << endl;
	cout << "Press 4 : To Add/Remove Employees" << endl;
	cout << "Press 5 : To Add/Remve Forms" << endl;
	cout << "Press 6 : Number Of Ministries" << endl;
	cout << "Press 7 : Number Of Registed Citizen" << endl;
	cout << "Press 0 : To Exit" << endl;
	cin >> a;
	//To Add ministry
	if (a == 1)
	{
		for (int i = 0; i < 7; i++)
		{
			cout << min[i]->getID() << "\t" << min[i]->getString() << endl;
		}
		cout << "Enter ID of ministry you want to Add : ";
		int addID; cin >> addID;
		if (Ministry::number_of_ministries == 7)
		{
			cout << "You Can't Add Ministry" << endl;
		}
		else
		{

			if (addID == 1)
				min[0] = new M_Education("Education", 1);
			else if (addID == 2)
				min[1] = new M_Electricity("Electricty", 2);
			else if (addID == 3)
				min[2] = new M_Finance("Finance", 3);
			else if (addID == 4)
				min[3] = new M_Health("Health", 4);
			else if (addID == 5)
				min[4] = new M_Interior("Interior", 5);
			else if (addID == 6)
				min[5] = new M_Tourism("Tourism", 6);
			else if (addID == 7)
				min[6] = new M_Transportation("Transportation", 7);

			cout << "Add Done " << endl;

			for (int i = 0; i < Ministry::number_of_ministries; i++)
			{
				cout << min[i]->getID() << " " << min[i]->getString() << endl;
			}
		}
		cout << "---------------------------------------------------------------" << endl;
		Owner();

	}
	//To Edit ministry 
	else if (a == 2)
	{
		Edit_ministry();
		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}
	//To Remove ministry
	else if (a == 3)
	{
		for (int i = 0; i < 7; i++)
		{
			cout << min[i]->getID() << " " << min[i]->getString() << endl;
		}
		cout << "Enter the id of ministry you want to remove" << endl;
		int x; cin >> x;
		for (int i = 0; i < 7; i++)
		{
			if (x == min[i]->getID())
			{
				delete min[i];
				Ministry::number_of_ministries--;
				cout << "Remove Done !!" << endl;
			}
		}
		for (int i = 0; i < Ministry::number_of_ministries; i++)
		{
			cout << min[i]->getID() << " " << min[i]->getString() << endl;
		}

		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}
	
	else if (a == 4)
	{
		int check;
		cout << "Press 1 To Add Employee" << endl;
		cout << "Press 2 To Remove Employee" << endl;
		cin >> check;
		if (check == 1) {
			cout << "Our Ministries" << endl << endl;
			// display our ministries
			for (int i = 0; i < 7; i++)
			{
				cout << min[i]->getID() << " " << min[i]->getString() << endl;
			}
			cout << endl;
			// choose id of the ministry
			cout << "Choose the id of the ministry : ";
			int idNumber; cin >> idNumber;
			for (int i = 0; i < 7; i++)
			{
				if (idNumber == min[i]->getID())
				{
					// display all departments on one ministry 
					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					cout << endl;
					cout << "Write the Name of the Department to Add Employee : ";
					cin.ignore();
					string ourdep; getline(cin, ourdep);
					// search for this department

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						if (min[i]->dep[j].depName == ourdep)
						{
							// Now You can Add Employee
							Employee e1;
							cout << "Please Enter Name of The Employee : ";
							string empName;
							cin.ignore();
							getline(cin, empName);
							cout << "Please Enter ID of the Employee : ";
							int empID;
							cin >> empID;
							e1.setName(empName);
							e1.setID(empID);
							min[i]->dep[j].emp.push_back(e1);
						}

						for (int k = 0; k < min[i]->dep[j].emp.size(); k++)
							cout << min[i]->dep[j].emp[k].getName() << endl;
					}

				}
			}
		}
		else if (check == 2) {
			// to remove employee from department

			// first --> add all ministries

			for (int i = 0; i < 7; i++)
			{
				cout << min[i]->getID() << " " << min[i]->getString() << endl;
			}
			cout << endl;
			// second --> choose minstry to remove employees from it
			cout << "Choose the id of the ministry : ";
			int idMin; cin >> idMin;

			for (int i = 0; i < 7; i++)
			{
				if (min[i]->getID() == idMin)
				{
					// then we choose department from this ministry

					//display all departments on this ministry

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					cout << endl;

					// write the name of department
					cout << "Write The Name of Department : ";
					cin.ignore();
					string department; getline(cin, department);
					// check for this name 

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						if (min[i]->dep[j].depName == department)
						{
							// we can remove employee here
							cout << "Write the Name of Employee To Remove : ";
							string empName; getline(cin, empName);
							for (int k = 0; k < min[i]->dep[j].emp.size(); k++)
							{
								if (empName == min[i]->dep[j].emp[k].getName())
								{
									min[i]->dep[j].emp.erase(min[i]->dep[j].emp.begin() + k);
								}
							}
							for (int k = 0; k < min[i]->dep[j].emp.size(); k++)
								cout << min[i]->dep[j].emp[k].getName() << endl;
						}
					}

				}
			}

		}

		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}
	else if (a == 5)
	{
		int check;
		cout << "Press 1 To Add Form" << endl;
		cout << "Press 2 To Remove Form" << endl;
		cin >> check;
		if (check == 1) {
			cout << "Our Ministries" << endl << endl;
			// display our ministries
			for (int i = 0; i < 7; i++)
			{
				cout << min[i]->getID() << " " << min[i]->getString() << endl;
			}
			cout << endl;
			// choose id of the ministry
			cout << "Choose the id of the ministry : ";
			int idNumber; cin >> idNumber;
			for (int i = 0; i < 7; i++)
			{
				if (idNumber == min[i]->getID())
				{
					// display all departments on one ministry 
					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					cout << endl;
					cout << "Write the Name of the Department to Add Employee : ";
					cin.ignore();
					string ourdep; getline(cin, ourdep);
					// search for this department

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						if (min[i]->dep[j].depName == ourdep)
						{
							// Now You can Add Employee
							Form f1;
							cout << "Please Enter Name of The Form : ";
							string FormName;
							cin.ignore();
							getline(cin, FormName);
							cout << "Please Enter ID of the Form : ";
							int FormID;
							cin >> FormID;
							f1.setID(FormID);
							f1.setName(FormName);
							min[i]->dep[j].depForm.push_back(f1);
						}

						// display all forms in department

						for (int k = 0; k < min[i]->dep[j].depForm.size(); k++)
							cout << min[i]->dep[j].depForm[k].getName() << endl;
					}
				}
			}
		}
		else if (check == 2) {
			// to remove Form from department

			// first --> add all ministries

			for (int i = 0; i < 7; i++)
			{
				cout << min[i]->getID() << " " << min[i]->getString() << endl;
			}
			cout << endl;
			// second --> choose minstry to remove Form from it
			cout << "Choose the id of the ministry : ";
			int idMin; cin >> idMin;

			for (int i = 0; i < 7; i++)
			{
				if (min[i]->getID() == idMin)
				{
					// then we choose department from this ministry

					//display all departments on this ministry

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						cout << min[i]->dep[j].depName << endl;
					}
					cout << endl;

					// write the name of department
					cout << "Write The Name of Department : ";
					cin.ignore();
					string department; getline(cin, department);
					// check for this name 

					for (int j = 0; j < min[i]->dep.size(); j++)
					{
						if (min[i]->dep[j].depName == department)
						{
							// we can remove Form here
							cout << "Write the Name of Form To Remove : ";
							string FormName; getline(cin, FormName);
							for (int k = 0; k < min[i]->dep[j].emp.size(); k++)
							{
								if (FormName == min[i]->dep[j].depForm[k ].getName())
								{
									min[i]->dep[j].depForm.erase(min[i]->dep[j].depForm.begin() + k);
								}
							}
							for (int k = 0; k < min[i]->dep[j].depForm.size(); k++)
								cout << min[i]->dep[j].depForm[k].getName() << endl;
						}
					}

				}
			}

		}

		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}

	//No.of ministries
	else if (a == 6) 
	{ 
		cout << Ministry::number_of_ministries << endl; 
		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}
	//No.of citizens
	else if (a == 7) 
	{
		cout << c1.citizens.size() << endl; 
		cout << "---------------------------------------------------------------" << endl;
		Owner();
	}
	//To Exit
	else if (a==0)
	{
		return 0;
	}
}
int citizen()
{
	
	while (true)
	{
		cout << "The ministries are :" << endl;
		for (int i = 0; i < 7; i++)
		{
			cout << min[i]->getID() << "\t" << min[i]->getString() << endl;
		}
		int x;
		cout << "Enter ID of ministry you want : ";
		cin >> x;
		for (int i = 0; i < 7; i++)
		{
			if (x == min[i]->getID())
			{
				min[i]->Form();
			}
		}
		int z;
		cout << "To choose new ministry press 1 " << endl;
		cout << "To Exit press 0 " << endl;
		cin >> z;
		if (z==1)
		{
			continue;
		}
		else if (z==0)
		{
			return 0;
		}
	}
}

int login()
{
	string name;
	string password;
	bool check = false;
	cout << "Enter your username: ";
	cin >> name;
	cout << "Enter your password: ";
	cin >> password;
		//check if he is owner	
		for (int i = 0; i < o1.owners.size(); i++)
		{
			if (name == o1.owners[i].name&&password == o1.owners[i].password)
			{
				cout << "WELCOME " << name << endl;
				check = true;
				cout << "---------------------------------------------------------------" << endl;
				Owner();
				
				break;
			}
		}
		//check if he is citizen
		for (int i = 0; i < c1.citizens.size(); i++)
		{
			if (name == c1.citizens[i].name&&password == c1.citizens[i].password)
			{
				cout << "WELCOME " << name << endl;
				check = true;
				citizen();
				cout << "---------------------------------------------------------------" << endl;
				//Elmfrood hna nzbot lw hwa citizen
				break;
			}
		}
		//lw da5l b login w howa m4 3aml signup 
		if(check==false)
		{
			cout << "Sorry! You should sign up at first \n";
			cout << "To sign up press 1 \nTo exit press 0 \n";
			int t;
			cin >> t;
			if (t == 1)
				sign_up();
			else
			{
				return 0;
			}
		}
}



int main()
{
	start();
	while (true)
	{
		int x;
		cout << "If you want to sign up press 1" << endl;
		cout << "If you want to login press 2" << endl;
		cout << "For exit press 3" << endl;
		cin >> x;
		if (x == 1)
		{
			sign_up();
		}

		else if (x == 2)
		{
			login();
			
		}
		else if (x == 3)
		{
			break;
		}
		else { continue; }
	}
	//0delete [7]min;
	system("pause");
	return 0;
}

