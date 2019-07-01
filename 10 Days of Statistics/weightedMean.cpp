#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main(){
  int n;
  cin >> n;
  int *x = new int[n];
  int *w = new int[n];

  for(int i = 0; i<n; i++)
    cin >> x[i];
  for(int i = 0; i<n; i++)
    cin >> w[i];

  double wAverage;
  int sumx = 0, sumw = 0;
  for(int i = 0; i<n; i++){
    sumx += (x[i]*w[i]);
    sumw += w[i];
  }
  wAverage = (sumx/(sumw*1.0));
  cout << fixed << setprecision(1) << wAverage << endl;

    return 0;
}

