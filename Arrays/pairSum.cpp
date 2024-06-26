/* Pair Sum

You have been given an integer array/list(ARR) and a number X.
Find and return the total number of pairs in the array/list which sum to X.

Note:
Given array/list can contain duplicate elements. 

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains an integer 'X'.

Output format :
For each test case, print the total number of pairs present in the array/list.
Output for every test case will be printed in a separate line.

*/




#include <iostream>
using namespace std;
#include "solution.h"

int pairSum(int arr[], int n, int sum)
{
    int count = 0; 
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
    return count;
}
int main(){
	int t;
	cin >> t;

while (t--){
		int size;
		int x;
    cin >> size;
		int *input = new int[size];
for (int i = 0; i < size; i++){
			cin >> input[i];
		}
cin >> x;
cout << pairSum(input, size, x) << endl;
   delete[] input;
	}
	
	return 0;
}
