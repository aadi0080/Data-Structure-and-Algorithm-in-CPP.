// rotation means
// ex  1 , 4, 5 , 3 ,6, 7  rotate  2  time
// 7 , 1 , 4 , 5 , 3 , 6 >> 1 time
// 6 ,7 , 1  , 4 ,5 , 3  >> 2 time
// n is size()-1,,, let  k=2
// sol>>>
// step1> divide  the  array  in two part n - k(1 4 5 3) and  k (6 , 7)
// step2> reverse  both  array, YOU WILL GET   (3 ,5 , 4 ,1) (7 , 6) 
// step3> reveerse  hte  complete  array 
// you will get  (6, 7 ,1 ,4, 5 ,3)
but what  if  

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}
void PartReverse(int i, int j, vector<int> &v)
{

    while (i < j)
    {
        int temp;
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
   
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(4);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    int n = v.size();
   
// by  default k(rotation time)
int k =2;         
    display(v, n);
    cout << endl;
    PartReverse(0, n - 1 - k, v);
    PartReverse(n - k, n - 1, v);
    PartReverse(0, n - 1, v);
    display(v , n);
}