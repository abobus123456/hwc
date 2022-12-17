#include <iostream>
#include <locale>
#include <string>
using namespace std;
 
int main(){
    setlocale(LC_ALL, ".1251");
    int step;
    char inptext[255];
    cout << "Input the text - ";
    cin.getline(inptext, 255);
    cout << "Input the step - ";
    cin >> step;
    for(int i = 0; i < strlen(inptext); i++){
        if (step >= 0) { inptext[i] = (inptext[i] - 'à' + step) % 32 + 'à'; }
        else{ inptext[i] = (inptext[i] - 'à' + 32 + step) % 32 + 'à';}
    }
    cout << inptext << endl;
}