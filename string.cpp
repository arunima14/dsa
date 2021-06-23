#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c,d;
    string s1,s2;
    int la,lb;
    
    cin>>a;
    cin>>b;
    la=a.size();
    lb=b.size();
    c=b[0]+a.substr(1,la);
    d=a[0]+b.substr(1,lb);
    s1=a+b;
    s2=c+" "+d;
    cout<<la<<" "<<lb;
    cout<<"\n"<<s1<<endl;
    cout<<s2;
    
    return 0;
}
