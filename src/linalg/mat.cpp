//============================================================================
// Name        : Test.cpp
// Author      : test
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int m=3;
int n=2;

//Function to do matrix operations

void matAdd(int a[2][2], int b[2][2]);

void matSub(int a[2][2], int b[2][2]);

void matMult(int a[2][2], int b[2][2]);


int main() {


	int a[2][2] = { {1,2}, {1,3}};

	int b[2][2] = { {1,3}, {1,2}};

	//matAdd(a,b);

	matSub(a,b);

	//matMult(a,b);

	return 0;
}


 void matAdd(int a[2][2], int b[2][2])
{
	 int rows = sizeof(a[0])/sizeof(a[0][0]);
	 int cols = sizeof(a)/sizeof(a[0]);

	 int c[rows][cols];



	 for(int i=0;i<=rows;i++)
	 {
		 for(int j=0;j<=cols;j++)
		 {
			 c[i][j]=a[i][j]+b[i][j];
			 cout<<c[i][j]<<endl;
		 }
	 }

}


 void matSub(int a[2][2], int b[2][2])
 {
	 int rows=sizeof(a)/sizeof(a[0]);

	 int cols=sizeof(a)/sizeof(a[0]);

	 int c[rows][cols];

	 for(int i=0;i<=rows;i++)
	 {
		 for(int j=0;j<=cols;j++)
		 {
			 c[i][j]=a[i][j]-b[i][j];
			 cout<<c[i][j]<<endl;
		 }
	 }

 }

 void matMult(int a[2][2], int b[2][2])
 {
	 int rows=sizeof(a)/sizeof(a[0]);

	 int cols=sizeof(a)/sizeof(a[0]);

	 int c[rows][cols];

	 cout<<rows<<endl;
	 cout<<cols<<endl;

	 for(int i=0;i<=rows;i++)
	 {
		 for(int j=0;j<=cols;j++)
		 {
			 int result=0;

			 for(int k=0;k<=rows;k++)
			 {
				 result+=a[i][k]*b[k][j];
			 }
			 c[i][j]=result;

			 cout<<"##"<<endl;
			 cout<<c[i][j]<<endl;
		 }
	 }

 }

