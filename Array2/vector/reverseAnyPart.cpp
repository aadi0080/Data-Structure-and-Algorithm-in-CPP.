#include<iostream>
#include<vector>
using namespace std; 
void display(vector<int>v , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<" "; 
    }

}
void PartReverse(int i , int j , vector<int>&v ){
    
    while(i<j){
        int temp;
        temp = v[i];
        v[i] = v[j]; 
        v[j] = temp; 
        i++; 
        j--;
    }
for(int i=0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
}
int main(){
    vector<int>v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
int size = v.size();
int i , j ;
cout<<"enter  starting index";
cin>>i;
cout << "enter ending index";
cin >> j;

display(v , size ); 
cout<<endl;
PartReverse( i , j , v);
}