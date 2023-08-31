#include<iostream>
using namespace std;

int lastOcc(int arr[],int size,int key){
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(key==arr[mid]){

            ans = mid;
            s = mid + 1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int firstOcc(int arr[],int size,int key){
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(key==arr[mid]){

            ans = mid;
            e= mid - 1;
        }
        else if(key<arr[mid]){
            e= mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int even[6]={3,6,12,12,13,34};
    int index = firstOcc(even, 6, 12);
    
    cout << "Index of the first Occurance is " << index << endl;
    index=lastOcc(even,6,12);
    cout << "Index of the last Occurance is " << index << endl;
    return 0;
}