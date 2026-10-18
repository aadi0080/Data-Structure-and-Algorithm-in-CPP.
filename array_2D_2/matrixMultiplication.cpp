#include<iostream>
using namespace std ;
int  main (){
    int m ,n , p , q  ; 
    cout<<"enter  the  row  no. in A   matrix  : " ; 
    cin>>m ;
    cout<<"entter  the column  no. in A  matrix: " ;
    cin>>n;
    cout<<"enter  the  row  no. in B   matrix  : " ; 
    cin>>p ;
    cout<<"entter  the column  no. in B  matrix: " ;
    cin>> q;
    int   A[m][n] ; 
    int   B[p][q] ;
    int AxB[m][q] ; 


if(n==p){
    cout<<"enter A matrix " ; 
    for(int i =0 ; i<m ; i++){
        for(int j = 0 ; j< n ; j++){
            cin>>A[i][j] ;

        }
      
    }
    cout<<"enter B matrix " ; 
    for(int i =0 ; i< p ; i++){
        for(int j = 0 ; j< q ; j++){
            cin>>B[i][j] ;

        }
      
    }

    // matrix  multiplication 
    
    for(int i =0 ; i < m ; i++){
        for(int j =0 ; j < q ; j++){
            AxB[i][j] = 0 ; 
            // AxB[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j]   channging  variable 0 to p - 1 ; 
            for(int k = 0 ; k < p ; k++){
                  AxB[i][j] += A[i][k]*B[k][j] ; 
            }
        }
    }

    cout<<endl ;

    // print AxB  matrix  
     for(int i =0 ; i< m ; i++){
        for(int j = 0 ; j< q ; j++){
           cout<<AxB[i][j]<<" " ; 

        }
        cout<<endl; 
      
    }

}


else{
    cout<<"matrix  multiplication is  not  possible   " ;
}
    
}
