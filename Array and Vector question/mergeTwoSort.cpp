#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>&v1 ,vector<int>&v2 ,vector<int>&v  ){
    int i = 0; 
    int j = 0;
    int k = 0; 
    while(i<v1.size() && j<v2.size()){
     if(v1[i]<v2[j]){
        v[k]=v1[i];
        i++;
        k++;
     }
     else{
        v[k]= v2[j];
        j++;
        k++;
     }
    }
    if(i==v1.size())   // V1 KE SARE  ELEMNT FILL HO GYE 
    {
        while(j<v2.size()){
            v[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==v2.size())   // V2 KE SARE  ELEMNT FILL HO GYE 
    {
        while(i<v1.size()){
            v[k]=v1[i];
            i++;
            k++;
        }
    }
    return ; 
}
int main(){
    vector<int>v1 = {3 ,5, 9,11};
    vector<int>v2 = {2,4,6,8};
     int n = v1.size()+v2.size();
    vector<int>v(n) ; 
    mergesort(v1 , v2 , v);
    for(int i =0 ;  i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}
