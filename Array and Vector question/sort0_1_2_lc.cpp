// sorting  0s  1s  and  2s   
// apporoch  >> three  pointer apporch    // dutch flag algorithm
#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int>&v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" "; 
    }
}
void  sort(vector<int>&v){
    int i =0 ;
    int j = 0 ;
    int k = v.size()-1 ;
    while(j< k){
        if(v[j]==2){
            v[j] = v[k] ;
            v[k] = 2; 
            k--;
        }
        if(v[j]==0){
            v[j] = v[i] ; 
            v[i] = 0;
            j++;
            i++;
        }
        if(v[j]==1){
            j++;
        }
         
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    display(v);
    sort(v);
    cout << endl;
    display(v);
}