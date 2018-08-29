#include<iostream>

using namespace std;

//Function signature
int solveMeFirst(int, int);

int main()
{
    int x, y;
    cin >> x >> y;
    cout << solveMeFirst(x, y) << endl;

    return 0;
}

int solveMeFirst(int x, int y)
{
    return x+y;
}