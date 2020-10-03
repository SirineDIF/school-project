#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"entrez deux valeurs: ";
    cin>>a>>b;
    if (a>b)
    {
        cout<<b;
    }
    if (b>a)
    {
        cout<<a;
    }
    else
    {
        cout<<a<<'='<<b;
    }
    return 0;
}
