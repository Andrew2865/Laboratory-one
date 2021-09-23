// Lab_02.cpp 
// < Штогрин,Депутат Андрій > 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 9 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double m;   
    double n;   
    double z1; //піти не забути поїсти
    double z2;  //альфа m бета n 

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    z1 =((cos(m)*cos(m))-2*cos(m)*cos(n)+(cos(n)*cos(n)))-((sin(m)*sin(m))-2*sin(m)*sin(n)+(sin(n)*sin(n)));
    z2 = (-4) * pow( sin((m - n) / 2),2) * cos(m + n);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
