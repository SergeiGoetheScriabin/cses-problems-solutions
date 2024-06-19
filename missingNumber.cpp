#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n; // first line of input
	long long int totalNums; // second line of input (contains n-1 numbers)
	long long int sum = 0;
	cin >> n; 
	
	for(int i = 0 ; i < n - 1 ; i++) { // loop thru amount of #'s - 1 b/c one # is missing
		cin >> totalNums; // read input from problem
		sum+= totalNums; // take the sum of the numbers we read into the input
	}
	
	
	cout << (n * (n + 1)) / 2 - sum << endl; // apply arithmetic series (MN = ES - S)
	
	return 0;
}
