#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={5,7,2,3,5,1,4,8};
    int n=arr.size();
    int target=3;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("Element found at index %d\n",i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
