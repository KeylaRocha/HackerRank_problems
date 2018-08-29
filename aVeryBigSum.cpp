#include<iostream>

using namespace std;

//Function signature
void sum(long int*, int);

int main()
{
    int size;
    cin >> size;
    long int array[size];
    for(int i=0; i<size; i++)
        cin >> array[i];
    sum(array, size);

    return 0;
}

void sum(long int* array, int size)
{
    long long int sum = 0;
    for(int i=0; i<size; i++)
        sum += array[i];
    cout << sum << endl;
}