#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Reverse a string
    string str = "Harshith";
    int s = 0 , e = str.length() - 1;
    while(s<e){
        swap(str[s++] , str[e--]);
    }
    cout<<"After reversing string"<<endl;
    cout<<str<<endl;

    return 0;
}