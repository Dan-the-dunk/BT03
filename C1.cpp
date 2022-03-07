#include<iostream>
#include<vector>
using namespace std;

vector <int> bsort( vector<int> arr ){
    //bsort , cai tien them thanh quicksort or mergesort
    int n = arr.size();
    for(int i = 0 ; i < n - 1 ; i ++ ){
        bool flag = false;
        for(int j = 0 ; j < n - 1 ; j ++ ){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = true;
            }
        }
        if(flag == false){
            break;
        }

    }
    return arr;


}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i ++ ){
        cin>>arr[i];
    }   
    arr = bsort(arr);
    bool flag = false;
    for(int i = 0 ; i < n - 1 ; i ++ ){
        if(arr[i] == arr[i + 1]){
            cout<<"YES";
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"NO";
}


