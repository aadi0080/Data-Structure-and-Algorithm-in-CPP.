#include<iostream>
using namespace  std ; 
int main (){
    int mat[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    //transpose  means  interchanging   of   row  and column 
    int transpose[3][3] ;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            transpose[i][j] = mat[j][i] ; 
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        cout<<transpose[i][j]<<" " ;
        }
        cout<<endl;
    }
}