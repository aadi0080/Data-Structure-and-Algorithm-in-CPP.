#include<iostream>
#include<climits>
using namespace std ; 
int main(){
     int m ,n ; 
    cout<<"enter  the  row  no. : " ; 
    cin>>m ;
    cout<<"entter  the column  no. : " ;
    cin>>n;
    int arr[m][n] ; 
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>arr[i][j] ;;

        }
      
    }
    int max = INT_MIN ; 
    int min = INT_MAX ;
      for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            if(max<arr[i][j]) max = arr[i][j] ; 
            if(min>arr[i][j]) min = arr[i][j] ; 

        }
    
    }
    cout<<"maximum element in the 2D array is : "<<max<<endl ; 
    cout<<"minimum element in the 2D array is : "<<min<<endl ;
    
}