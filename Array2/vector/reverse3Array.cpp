/// reverse  the  array  using  two pointers
/// exactly like swaping 
/// without creating any  array  

#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int>arr){
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    display(arr);
    cout<<endl;
    // int i =0 , j= arr.size()-1; 
    // while(i<=j){
    //     int temp; 
    //     temp   = arr[i]; 
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++; 
    //     j--;
    // }
    
    for(int i=0 , j=arr.size()-1 ; i <= j ; i++ , j--){
        //swap temp = a , a = b , b = temp ; 
        int temp ; 
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ; 
    }
    
    display(arr);
}