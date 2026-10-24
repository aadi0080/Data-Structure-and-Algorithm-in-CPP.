// if  num row  is 5
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1 
// concept 
// 1st idx 0   row  >> 1 colunm idx 0 
// 2nd idx 1 row >>  2 colunm  idx  1 
// if i and j == 0 or i ==j 
// push_back(1)
// a[i][j] = a[i-1][j-1]  + a[i-1][j]

#include<iostream>
#include<vector>
using  namespace  std; 
int main (){
    int numrow ; 
    cout<<"enter  no. of  row:  " ; 
    cin>> numrow ;
    vector< vector<int> > v ; 
for (int i =0 ; i<numrow ; i++){
    vector<int> a(i+1) ; 
    v.push_back(a) ; 
}
// generating 
    for(int i =0 ; i < numrow ; i++)
    {
        for(int j = 0 ; j < i+1 ; j++)
        {
            if((j==0) || i == j )
            {
            v[i][j] = 1; 
            }
            else
            {
                v[i][j] = v[i-1][j-1] +v[i-1][j] ; 
            }
    
        
        }
    }

    // printing
     for(int i =0 ; i < numrow ; i++)
    {
        for(int j = 0 ; j < i+1 ; j++)
        {
           cout<<v[i][j]<<" " ; 
        }
        cout<<endl; 
    }


}