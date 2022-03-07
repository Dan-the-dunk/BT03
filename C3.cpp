#include<iostream>
#include <string> 
using namespace std;

bool sodoiguong( string str){
    int n = str.size();
    
    for(int i = 0 ; i < (int)n/2 ; i ++ ){
        if(str[i] != str[n-1-i]){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i ++ ){
        int a,b;
        cin>>a>>b;
        int count = 0;
        for(int j = a ; j <= b ; j ++ ){

            string arr = to_string(j);
            if(sodoiguong(arr) == true){
                count ++;
            }
        }
        cout<<count<<endl;
    }

}