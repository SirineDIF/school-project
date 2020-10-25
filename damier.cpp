#include <iostream>
using namespace std;

int main ()
{
   int n,m,i,j;
   char c;
   cout<<"choisir un caractere :";
   cin>>c;
   cout<<"longueur?";
   cin>>n;
   cout<<"largeur?";
   cin>>m;
   for (i=1;i<=m/2;i=i+1)
   {
      for (j=1;j<=n/2;j=j+1)
      {
        cout<<c;
        cout<<' ';
      }
      cout<<endl;
       for (j=1;j<=n/2;j=j+1)
      {
        cout<<' ';
        cout<<c;
      }
      cout<<endl;
   }
   return 0;

}
