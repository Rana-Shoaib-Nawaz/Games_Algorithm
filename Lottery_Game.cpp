//Lottery
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int x,number,winner=0;
	int A[5];
	int B[5];

	for(int i=0;i<5;i++)
	{
		x=(rand()+time(0))%10;     //Find the random numbers
		A[i]=x;                   //Random number assign array A[i]
	}
	for(int i=0;i<5;i++)     //Loop run five times
	{
		cout<<"Enter the number :";
		cin>>B[i];              //Given 2 array B[i]
	}
	for(int i=0;i<5;i++)
	{
		if(A[i]==B[i])      //If condition check that the value of A[i] is equal to B[i]
		{ 
			cout<<B[i]<<endl;
			winner++;         //counter loop use to count the value
		}
	}
	if(5==winner)    //If 5 is eqaul to winner
	{
		cout<<"You won grand prize";
	}
	else            //Otherwise it print
	cout<<"You not won grand prize";
}
