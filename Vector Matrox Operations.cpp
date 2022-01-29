//Adding two large vectors :
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <omp.h> // library to allow a programmer to use parallel paradigms
using namespace std;
#define MAX 25

int main()
{
	int a[MAX],b[MAX],c[MAX],i;
	printf("\nFirst Vector:\n");
	#pragma omp parallel for
	for(i = 0; i < MAX; i++) {
		a[i] = rand()%1000;
	}
	for(i = 0; i < MAX; i++){
		printf("%d\t",a[i]);
	}
	printf("\nSecond Vector:\n");
	#pragma omp parallel for
	for(i = 0; i < MAX; i++) {
		b[i] = rand()%1000;
	}
	for(i = 0; i < MAX; i++) {
	printf("%d\t",b[i]);
	}
	printf("\nParallel-Vector Addition:(a,b,c): \n");
	#pragma omp parallel for
	for(i=0; i < MAX; i++) {
		c[i] = a[i] + b[i];
	}
	for(i = 0; i < MAX; i++) {
		printf("\n%d\t%d\t%d",a[i],b[i],c[i]);
	} 
}


//Multiply Vector and Matrix :
#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<omp.h>
using namespace std;

int main()
{
	int m = 3, n = 2;
	int mat[m][n], vec[n], out[m];
	for(int row = 0; row < m; row++){
		for(int col = 0; col < n; col++) {
			mat[row][col] = 1;
		} 
	}
	cout<<"Input Matrix"<<endl;
	for(int row = 0; row < m;row++) {
		for(int col = 0; col < n; col++) {
			cout<<"\t"<<mat[row][col];
		}
		cout<<""<<endl;
	}
	for(int row = 0; row < n; row++) {
		vec[row]=2;
	}
	cout<<"Input Col-Vector"<<endl;
	for(int row = 0; row < n; row++) {
		cout<<vec[row]<<endl;
	}
	#pragma omp parallel
	{
		#pragma omp parallel for
		for(int row = 0;row < m; row++)
		{
			out[row] = 0;
			for(int col = 0; col < n; col++)
			{
				out[row] += mat[row][col] * vec[col];
			}  
		}
	}
	cout<<"Resultant Col-Vector"<<endl;
	for(int row = 0; row < m; row++)
	{
		cout<<"\nvec["<<row<<"]:"<<out[row]<<endl;
	}
	return 0;
}