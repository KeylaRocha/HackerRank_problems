#include<iostream>

using namespace std;

long long int factorial(int n);

int main(){
  int n;
  cin >> n;
  cout << factorial(n) << endl;

  return 0;
}

long long int factorial(int n){
  if(n==0 or n==1)
    return 1;
  return n*factorial(n-1);
}
