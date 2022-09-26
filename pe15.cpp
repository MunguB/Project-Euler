#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int r=20, c=20;
    int total=40; 

    long long result= (tgamma(total)*total)/((tgamma(r)*r) * tgamma(c)*c); 

    cout<<result<<endl; 
}
