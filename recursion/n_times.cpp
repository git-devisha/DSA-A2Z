#include <bits/stdc++.h>
using namespace std;

void f(int i, int n)
{
    if (i > n)
        return;
    cout << "devisha" << endl; 
    //to print 1....n put cout<<i<<endl;
    // to print n....1(reverse fashion) put
    //  if(i<1) return cout<<i<<endl; int main(){f(n,n);}
    f(i + 1, n);
}

int main()
{
    int n=9;
    // cin >> n;
    f(1, n); // Starting from i=1
    return 0;
}