#include<iostream>
#include<string>
using  namespace std  ; 
int  main(){
    string check ; 
    cout<<"enter check  :  " ; 
    getline(cin , check); 

    int count = 0; 
    for(int i = 0 ; check[i] != '\0'  ; i++){
        if (check[i] == 'a' || check[i] == 'e' || check[i] == 'i' || check[i] == 'o' || check[i] == 'u'){
            count++ ; 
        }
    }

    cout<<"number  of vovel is :  "<<count ; 
}