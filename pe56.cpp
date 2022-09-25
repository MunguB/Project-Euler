#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int result=0;  
    for(int a=99; a>0; a--) {
        for(int b=99; b>0; b--) {
            int sum=0;  
            string power=to_string(pow(a,b)); 
            for(int i=0; i<power.length()-7; i++) {
                sum+=(power[i]-'0');
            }
            if(sum>result){
            result=sum; 
            }
        }
    }
    cout<<result<<endl;
}
