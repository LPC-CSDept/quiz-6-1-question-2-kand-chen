#include <iostream>
#include <iomanip>
using namespace std;

// ******************************
// Your code here
// ******************************

// ******************************
// this function will help you pass the test. When you print the result with this function, you will get the same output format

void getInput(int &n1, int &n2, int &n3);
int  findMin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main(){
	
}

void getInput(int &n1, int &n2, int &n3){
	cout << "Enter three values, separated by a space: " << endl;
	cin >> n1 >> n2 >> n3; 
}

void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}

