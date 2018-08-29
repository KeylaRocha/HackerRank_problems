#include<iostream>

using namespace std;

//Function signature
void result(int*, int*);

int main()
{
    int A[3], B[3];
    cin >> A[0] >> A[1] >> A[2];
    cin >> B[0] >> B[1] >> B[2];
    result(A, B);

    return 0;
}

void result(int*A, int*B)
{
    int points[2] = {0,0};
    for(int i=0; i<3; i++)
    {
        if(A[i]>B[i])
            points[0] +=1;
        else if(A[i]<B[i])
            points[1] +=1;
        //if both are equal, there's nothing to be done
    }
//points[0] => Alice / points[1] => Bob
    cout << points[0] << " " << points[1] << endl;
}