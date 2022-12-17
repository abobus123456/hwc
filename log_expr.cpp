#include <iostream>
using namespace std;

int main(){
    float x, y;
    cout << "Input the coordinates (x,y): ";
    cin >> x >> y;
    cout << ((x < 0) && (y != 0)) << endl;
}