#include<iostream>
using  namespace std ; 

//      ____<
//   >   |___ 
//      ____| <
// printing  matrix  in this  form is  called  spiral  form  of  matrix



int  main(){
    int m ,n ; 
    cout<<"enter  the  row  no. : " ; 
    cin>>m ;
    cout<<"entter  the column  no. : " ;
    cin>>n;
    int arr[m][n] ; 
    cout<<"enter  the  array  " ; 
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>arr[i][j] ;

        }
      
    }

for(int i =0 ; i<m ; i++){
        if(i%2!=0){
             for(int j = 0 ; j< n ; j++){
                  cout<<arr[i][j]<<" ";
        }
    }
        else{
            for(int j = n-1 ; j>= 0 ; j--){
            cout<<arr[i][j]<<" ";
            }
        }
    }

}