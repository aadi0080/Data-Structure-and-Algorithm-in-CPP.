//       __ >
//      |  |  |
//      |  |  |  ^
//   ^  |  |__|
//              
// printing  matrix  in this  form is  called  spiral  form  of  matrix

#include<iostream>
using  namespace std ; 
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

    for (int  j = 0 ; j < m ; j++){
       if(j%2==0){
        for(int i = 0 ; i< n ; i++){
            cout<<arr[i][j]<<" ";
        }
       }
       else{
        for(int i = n-1 ; i>= 0 ; i--){
            cout<<arr[i][j]<<" ";
        }
       }
        
    }


}