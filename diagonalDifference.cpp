#include<iostream>
#include<cstdlib>

using namespace std;

void difference(int**, int);

int main()
{
    int size;
    cin >> size;
    int** matriz = new int*[size];
    for(int i = 0; i<size; i++)
        matriz[i] = new int[size];
    for(int i = 0; i<size; i++)
        for(int j = 0; j<size; j++)
            cin >> matriz[i][j];
    difference(matriz, size);

    return 0;
}

void difference(int** matriz, int size)
{
    int primary=0, secondary=0;
    for(int i=0,j=size-1; i<size && j>=0; i++,j--)
    {
        primary += matriz[i][i];
        secondary += matriz[i][j];        
    }
    cout << abs(primary-secondary) << endl;
}