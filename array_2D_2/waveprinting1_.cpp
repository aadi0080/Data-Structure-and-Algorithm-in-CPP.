//      > ____
//       ____| <
//    >  |_____
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
//  LONG METHOD
    // just  reverse  alternative  row 
//     for(int i =0 ; i < m ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i%2!=0){
//                 int p1 = 0 ;
//                 int p2 = n-1 ;
//                 while(p1<=p2){
//                     int temp = arr[i][p1] ;
//                     arr[i][p1] = arr[i][p2] ; 
//                     arr[i][p2] = temp ; 
//                     p1++ ; 
//                     p2-- ; 
//                 }
//             }
//         }
//     }

//     cout<<endl ; 
// // spiral printing of matrix 
// for(int i =0 ; i<m ; i++){
//         for(int j = 0 ; j< n ; j++){
//             cout<<arr[i][j]<<" ";

//         }
       
      
//     }
// short method 
for(int i =0 ; i<m ; i++){
        if(i%2==0){
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