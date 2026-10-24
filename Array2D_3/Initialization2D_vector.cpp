#include<iostream>
#include<vector>
using namespace std; 
// what  is  2D vector  
// ans  - 2D vector is  vector of  vector  
int  main() {
vector< vector<int> > v ;  
// initialzation 2D  vector 
// int m = v.size() ;     
// no. of  row 
// int n = v[0].size() ;
// no. of  colunm (if  column is  not  vary)

vector<int> v1 ; 
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);

vector<int> v2 ; 
v2.push_back(1);
v2.push_back(2);
v2.push_back(3);

vector<int> v3 ; 
v3.push_back(1);
v3.push_back(2);
v3.push_back(3);


// pushing  v1 v2  v3  in vector  v 
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

for(int i = 0 ; i < 3 ; i++){
    for(int j= 0 ; j < 3  ; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}



}
