#include <iostream>

using namespace std;

int main(){
  int n, m = 1;
  cin >> n;
  while(m <= 10){
    cout << n << " x " << m << " = " << n*m << endl;
    m++;
  }
  return 0;
}
