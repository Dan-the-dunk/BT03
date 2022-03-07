#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ;
    cin>>n;
    string str;
    str = to_string(n);
    for(int i = 0 ; i < str.size() ; i ++ ){
        cout<<str[i]<<" ";
    }

}