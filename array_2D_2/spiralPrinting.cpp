#include<iostream>
using namespace  std;
int main(){
    int m ; 
    cout<<"enter  the  no. of row: " ;
    cin>>m ;
    int n ; 
    cout<<"enter  the no. of column: ";
    cin>>n ; 
    int arr[m][n] ; 
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }
int minC = 0   ; 
int maxC = n-1 ; 
int minR = 0   ; 
int maxR = m-1 ; 

while(minR<=maxR && minC <= maxC){
    // right 
if(minR>maxR || minC> maxC)  break ;   /// for  every  loop check karega  ki condition out  of  range  to nhi gyi 
    for(int j = minC ; j <=maxC ; j ++){
        cout<<arr[minR][j]<<" " ; 
    }
   minR ++ ; 
if(minR>maxR || minC> maxC)  break ;
   // downn
   for(int i = minR ; i<= maxR ; i++){
    cout<<arr[i][maxC]<<" "; 
   }
   maxC -- ;
if(minR>maxR || minC> maxC)  break ;
   // left 
   for(int j = maxC ; j>= minC ; j--){
    cout<<arr[maxR][j]<<" " ; 
   }
    maxR -- ;
if(minR>maxR || minC> maxC)  break ; 
   // up 
   for(int i = maxR ; i>=minR ; i--){
    cout<<arr[i][minC]<<" " ; 
   }
   minC ++ ;
}



}