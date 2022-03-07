#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();
    bool flag = true;
    for(int i = 0 ; i < (int)n/2 ; i ++ ){
        if(str[i] != str[n-1-i]){
            flag = false;
            cout<<"NO";
            break;
        }
    }
    if(flag == true ) cout<<"YES";

}