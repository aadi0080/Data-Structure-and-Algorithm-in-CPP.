#include<iostream>
using namespace std ; 
int main (){
     int m ,n ; 
    cout<<"enter  the  row  no. : " ; 
    cin>>m ;
    cout<<"entter  the column  no. : " ;
    cin>>n;
    int arr[m][n] ; 
    // inputing  array 
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>arr[i][j] ;

        }
}

  //transpose  means  interchanging   of   row  and column
    // column wise  printing 

    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}