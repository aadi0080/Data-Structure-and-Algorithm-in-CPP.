#include<iostream>
using  namespace std ;
int main(){
    int arr1[3][3] = { {1,4,3} , {4,2,6} , {7,8,4} } ;
    int arr2[3][3] = { {3,5,1} , {0,4,1} , {1,0,1} } ;
    int sum[3][3];
    for (int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
            sum[i][j]=  arr1[i][j] + arr2[i][j] ;
        }

    }
    for (int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){
           cout<<sum[i][j]<<" ";
        }
        cout<<endl; 
    }
    
}