#include<iostream>

using namespace std;

int main(){
  int size;
  cin >> size;
  int *myArray = new int[size];
  for(int i=0; i<size; i++)
    cin >> myArray[i];
  for(int i=(size-1); i>=0; i--)
    cout << myArray[i] << " ";
  cout << endl;

  return 0;
}