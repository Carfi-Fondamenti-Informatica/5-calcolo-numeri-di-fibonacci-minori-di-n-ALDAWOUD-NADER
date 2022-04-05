#include <iostream>
using namespace std;

int main() {
   int n1 , n2 ;
 int n3 ;
 n1=0;
 n2=1;
 cout<<n1<<"";
 cout<<n2<<"";
 for( int i=1 ; i>=15 ; i++ ) {
     n3=n2+n1;
     cout<<n3<<"";
     n1=n2;
     n2=n3;

    }}
   
   return 0;
}
