#include <iostream>
using namespace std;

float Max (float a, float b)
{
    if (a>b)
        cout<<a;
    else cout<<b;
    return 0;
}
int main()
{
    cout<< "choisir deux valeurs : ";
    int x,y;
    cin>>x>>y;
    Max (x,y);
}
