#include <iostream>
using namespace std;

int main(){
        int n;
        cout<<"This Function prints Triangle"<<endl;
        cout<<"Enter Triangle Length: ";
        cin>>n;
        for(int i = 1 ; i <= n ; i++){
                for(int k = 1 ; k <= n-i+1 ;k++){
                        cout<<"  ";
                }
                for(int j = n-i+1 ; j <= n+i-1 ; j++){
                        cout<<"* ";
                }
                cout<<endl;
        }
        return 0;
}
