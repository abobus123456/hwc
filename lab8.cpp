#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Введите N: ";
    cin >> n;
    
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < n; j++){
        if(a[j] % 2 == 0){
            b[count] = a[j];
            count++;
        }
    }
    for(int i = 0; i < count; i++){
        cout << b[i] << " ";
    }
    cout << "Размер B = " << count << endl;
}