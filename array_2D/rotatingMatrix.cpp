// rotating  matrix by  90 degree 
#include<iostream>
using  namespace std  ; 
int  main(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int n = 3 ;
      for(int i = 0 ; i < n ; i++ ) {
            for(int j = i+1 ; j<n ; j++){
                int temp = matrix[i][j]; 
                matrix[i][j] = matrix[j][i]; 
                matrix[j][i] = temp ; 
            }
        } 

        // reversing  each row 
        for (int k = 0 ; k < n ; k++){
            // two pointer  
            int  i = 0 ;
            int j = n-1 ; 
            while(i<=j){
                int temp = matrix[k][i] ; 
                matrix[k][i] = matrix[k][j] ; 
                matrix[k][j] = temp ; 
                i++ ; 
                j-- ; 
            }

        }
        
      for(int i = 0 ; i < n ; i++ ) {
            for(int j = 0; j<n ; j++){
                cout<<matrix[i][j]<<" " ; 
            }
            cout<<endl ; 
        }


    }
