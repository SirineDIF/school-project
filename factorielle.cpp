#include <iostream>
using namespace std;

long factorielle (int n)
{
    int i;
    long f;
    f = 1;
    for (i=1;i<=n;i=i+1)
    {
        f = f*i;
    }
    return f;
}

int main()
{
    int i;
    for (i=1;i<=15;i=i+1)
        cout<< factorielle(i) << endl;
    return 0;
}
