/* Arrange Numbers in Array

You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first and the only line of each test case or query contains an integer 'N'.

Output Format :
For each test case, print the elements of the array/list separated by a single space.
Output for every test case will be printed in a separate line.



*/


#include <iostream>
using namespace std;


void arrange(int *arr, int n)
{
    int val=1;
    int start = 0 ,end = n-1;
    while(start<=end){
    if(val%2==1){
    arr[start]=val;
    val++;
    start++;
   }else{
    arr[end]=val;
    val++;
    end--;
        }
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}
