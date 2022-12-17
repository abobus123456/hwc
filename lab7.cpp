#include <iostream>
using namespace std;

int main(){
    float ap = 0, ak = 2, e;

    cout << "Введите e: ";
    cin >> e;

    int k = 2, count = 1;
    while (abs(ak - ap) >= e){
        count++;
        ap = ak;
        ak = 2 + 1/ap;
    }
    cout << "Aк = " << ak << ";" << "Aк-1 = " << ap << ";" << "К = " << count;
}