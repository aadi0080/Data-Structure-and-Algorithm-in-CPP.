// shorting 0s and 1s
#include<iostream>
#include<vector>
using  namespace std; 
void display(vector<int>&v){
    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void sort(vector<int>&v){


    int noz = 0;
    int noo = 0 ;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            noz++;
        else
            noo++;
    }
    // filling
     for (int i = 0; i < v.size(); i++)
     {
        if(i<noz) v[i]=0 ;
        else v[i] = 1 ; 

     }

    } 
int main ()
{
        vector<int>v;
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        display(v);
        sort(v);
        cout<<endl;
        display(v);


}

