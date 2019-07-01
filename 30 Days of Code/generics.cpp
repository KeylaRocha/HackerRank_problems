#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<class Type>
void printArray(vector<Type> x){
    if(x.empty()) return;
    int Size = x.size();
    for(int i=0; i<Size; i++)
        cout << x[i] << endl;
}
int main() {