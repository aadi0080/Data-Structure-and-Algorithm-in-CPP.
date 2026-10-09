#include<iostream>
using  namespace  std  ; 
void sum(){ 
     int m ,n ; 
    cout<<"enter  the  row  no. : " ; 
    cin>>m ;
    cout<<"entter  the column  no. : " ;
    cin>>n;
    int arr[m][n] ; 
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>arr[i][j] ;

        }
      
    }
    int  sum = 0 ; 
    for(int i = 0 ; i < m ; i++){
    for(int j = 0 ; j < n ; j++){
        sum = sum + arr[i][j];
    }
 }
 cout<<"the sum of the  2d  array is " <<sum ; 
}
int main(){
   
    sum();
}