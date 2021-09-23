// Lab_02.cpp 
// < Øòîãðèí,Äåïóòàò Àíäð³é > 
// Ëàáîðàòîðíà ðîáîòà ¹ 2.1 
// Ë³í³éí³ ïðîãðàìè. 
// Âàð³àíò 9 

#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double m;   
    double n;   
    double z1; //ï³òè íå çàáóòè ïî¿ñòè
    double z2;  //àëüôà m áåòà n 

    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

    z1 =((cos(m)*cos(m))-2*cos(m)*cos(n)+(cos(n)*cos(n)))-((sin(m)*sin(m))-2*sin(m)*sin(n)+(sin(n)*sin(n)));
    z2 = (-3) * pow( sin((m - n) / 2),2) * cos(m + n);
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}
