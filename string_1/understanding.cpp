#include<iostream>
#include<string>

using  namespace std ; 
int main(){
// this  is  is  way  to declear  string
    char  x[6] = {'a' , 'd' , 'a' , 'r' , 's' , 'h' } ; 
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<x[i]; 
    }
    cout<<endl; 
// you don't  need  loop to print the  char  string .  
cout<<x <<endl; 
// in cpp char  array  doesn't need  loop to print  

// this  is  also way to declear  string  
string a  = "adarsh" ;
cout<<a; 




}
