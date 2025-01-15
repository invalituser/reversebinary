#include<iostream>
#include<string>
using namespace std;
int main(){
    string binary = "101111";

    cout << "Reversed Binary: ";
    for (int a = binary.length()-1; a >= 0; a--){
        cout << binary[a];
    }
    cout << endl;
}