#include <iostream>

using namespace std; 
//program that displays back-counting from 10 to i using do-while loop
int main() 
{
	int f_num=10; //fixed number declaration
	double i; //varible declaration
	cout<<"\n\n\t\tEnter the number Less than 10: "; cin>>i; //input from user
	cout<<"\n\n\t\tDecending Order from 10 to "<<i<<" = ";
	do //starting point for loop
	{
		cout<<f_num<<", "; 
		f_num--;  //decrement from 10 to i
	}while(f_num!=i-1); //condition till the loop executes
	
	
	return 0;
}
