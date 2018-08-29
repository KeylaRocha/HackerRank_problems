#include<iostream>

using namespace std;

//Function signature
int sum(int*, int);

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    cout << sum(a, n) << endl;
}

int sum(int* a, int n)
{
    static int aux = 0;
    for(int i = 0; i<n; i++)
        aux += a[i];
    return aux;
}