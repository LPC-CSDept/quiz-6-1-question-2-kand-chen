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
	int a, b, c, min;
	getInput(a, b, c);
	min = findMin(a, b, c);
	printResult(a, b, c, min);
}

void getInput(int &n1, int &n2, int &n3){
	cout << "Enter three values, separated by a space: " << endl;
	cin >> n1 >> n2 >> n3; 
}

int  findMin(int n1, int n2, int n3){
	int miN;
	miN = n1;
	for (int i = 0; i < 3; i++){
		if 
	}
}


void printResult(int n1, int n2, int n3, int min)
{
	cout << n1 << " " << n2 << " " << n3 << " " << min << " " << endl;
}

