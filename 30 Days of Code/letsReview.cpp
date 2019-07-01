#include <iostream>

using namespace std;

int main(){
  int times;
  cin >> times;
  char* str = new char[10001];
  while(times > 0){
     cin >> str;
    for(int i=0; str[i]!='\0'; i++){
      if(i%2==0)
        cout << str[i];
      }
    cout << " ";
    for(int i=0; str[i]!='\0'; i++){
      if(i%2!=0)
        cout << str[i];
    }
    cout << endl;
    times--;
  }

  return 0;
}
