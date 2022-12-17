#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, h;
    int n, i;
    cout << "Введите координаты: ";
    cin >> a >> b;
    cout << "Введите кол-во отрезков: ";
    cin >> n;
    h = (b - a + 1) / n;
    cout << h << endl;
    for(int i = 0; i < n; i++){
        cout << 1 - sin(a + i * h) << " " << endl;
    }
}