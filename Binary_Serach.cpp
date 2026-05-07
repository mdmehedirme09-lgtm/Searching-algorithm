#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int n=arr.size();
    int target=5;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            printf("Element found at index %d\n",mid);
            return 0;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    printf("Element not found\n");
    return 0;
}
