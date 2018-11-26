#include<iostream>
using namespace std;
int main()
{
    unsigned n,k;
    cout<<"nr=";cin>>n;
    cin>>k;
    n=n<<(32-k);
    n=n>>31;
    cout<<n;
}
