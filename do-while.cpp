#include<iostream>
using namespace std;
int main()
{
	int flag;
	
	do
 	{
 		int limit;
 		int Number;
 		
 		cout<<"Please enter a number";
 		cin>>Number;
 		
 		cout<<"Please enter the limit";
 		cin>>limit;
 		
 		for(int i =1;i<=limit;i++)
 		{
 			cout<<Number<<" x "<<i<<" = "<<Number*i<<endl;
		}
 		
 		cout<<"do you want to continue\nPress 1 to continue anyother key to exit";
 		cin>>flag;
	}
 	while(flag ==1);
	

}
