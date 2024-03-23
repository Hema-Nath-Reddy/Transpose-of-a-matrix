#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	while(rows<=0){
		cout<<"Number of rows cannot be less than or equal to 0. Enter an accepted value: ";
		cin>>rows;
	int cols;
	cout<<"Enter the number of columns: ";
	cin>>cols;
	while(cols<=0){
		cout<<"Number of cols cannot be less than or equal to 0. Enter an accepted value: ";
		cin>>cols;
	}
	int a[rows][cols];
	int b[rows][cols];
	cout<<"Enter the elements of the matrix: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"Enter ["<<i+1<<"]["<<j+1<<"] element: ";
			cin>>a[i][j];
		}
	}
	cout<<"The matrix entered is: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			b[j][i]=a[i][j];
		}
	}
	cout<<"The transpose of the matrix is: "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
