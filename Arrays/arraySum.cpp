/* Array Sum

Given an array of length N, you need to find and print the sum of all elements of the array.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

*/




#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
 int array[1000000];
 for(int i=1; i<=n; i++){
     cin>>array[i];
 }
 int sum;
 for(int i=1; i<=n; i++){
     sum=sum+array[i];
 }
 cout<<sum;
}


