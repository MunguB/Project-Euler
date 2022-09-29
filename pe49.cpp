#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false; 
    for(int i = 2; i < n/2; i++) {
        if(n%i == 0){
            return false; 
        }
    }
    return true;
}

bool isPermutable(int a, int b) {
    int arr[10]; 
    for(int i=0; i<10; i++){
        arr[i]=0; 
    }
    while(a>0) {
        arr[a%10]++; 
        a/=10; 
    }
    while(b>0) {
        arr[b%10]--;
        b/=10;
    }
    for(int i=0; i<10; i++){
        if(arr[i]!=0){
            return false; 
        }
    }
    return true; 
}

int main() { 
    int arr[9000]; 
    int index=0; 
    for(int n=1000; n<10000; n++){
        if(isPrime(n)){
            arr[index]=n; 
            index++;  
        }
    }
    for(int i=0; i<1000; i++){
        for(int j=i+1; j<1000; j++){
            int k= arr[j]-arr[i]+arr[j]; 
            if(k<10000 && isPrime(k)){
                if(isPermutable(arr[i], arr[j]) && isPermutable(arr[i],k)){
                    if(k-arr[j]==3330 && arr[j]-arr[i]==3330){
                        cout<<arr[i]<<arr[j]<<k<<endl; 
                        break; 
                    }
                }
            }
        }
    }
    return 0;
}
