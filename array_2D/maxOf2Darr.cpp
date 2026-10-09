#include<iostream>
#include<climits>
using namespace  std ; 
int  main ()
{
    cout<<"enter the row no. : " ;
    int m , n ;
    cin>>m ;
    cout<<"enter the column no. : " ;
    cin>>n ;
    int arr[m][n];
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>arr[i][j] ;
        }
    }
    int min = INT_MIN ; 
    for(int i = 0 ; i<m ; i++){
        for(int  j=0 ; j<n ; j++)
{
            if(arr[i][j]>min){
                min = arr[i][j] ;
            }
}
    }
    cout<<"The maximum element in the 2D array is: "<<min<<endl;

}