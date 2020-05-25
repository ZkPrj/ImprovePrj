#include<iostream>

#include"mathfunc.h"

using namespace std;

int main(){
    double a,c;

    cout << "enter a and b: " << endl;
    cin >> a >> c;
    cout << "a*b*b = " << scjfunc(a,c) << endl;

    system("pause");
    return 0;
}