#include<iostream>
#include<fstream>
using namespace std;

void DataWriter();
void FileDataReader();

string DataReader;
string Name;
string PhoneNumber;
	
const string FILENAME = "Hammad.txt";
 	
int main()
{
	int flag = 0;
	do
	{
		DataWriter();
		
		cout<<"Do you want to contine?\nPress 1 to continue any other number to exit"<<endl;
		cin>>flag;
	}while(flag ==1); 	
	
	cout<<"Do you want to see save contact list?\nPress 1 to See\nAny other key to exit the program"<<endl;
	int choice = 0;
	cin>>choice;
	if(choice == 1)
	{
		FileDataReader();
	}
	else
	{
		cout<<"Thanks for using the program"<<endl;
	}
	
	cout<<"\nProgram Finished";
}

void DataWriter()
{
	ofstream outFile(FILENAME, ios::app);
	
	cout<<"Please enter your Name ";
	cin>>Name;
	
	cout<<"Please enter your Phone Number ";
	cin>>PhoneNumber;
	
	outFile<<"Name : "+Name+"-- Phone Number : "+PhoneNumber<<endl;
	

}

void FileDataReader()
{
	ifstream inFile(FILENAME);

	while(getline(inFile, DataReader))
	{
		cout<<DataReader<<endl;
	}
}
