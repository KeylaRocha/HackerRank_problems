#include<iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int values[size];
    for(int i=0; i<size; i++)
        cin >> values[i];
    int neg = 0, pos = 0;
    for(int i=0; i<size; i++){
        if(values[i]>0)
            pos++;
        if(values[i]<0)
            neg++;
    }
}