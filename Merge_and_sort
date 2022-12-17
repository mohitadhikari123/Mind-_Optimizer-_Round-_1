#include <bits/stdc++.h>
using namespace std;
    int main(){
        int n,m; 
        cout<<"Enter the size of both arrays " ;
        cin>>n>>m;
      vector <int> arr1(n);
      vector <int> arr2(n);
        cout<<"Enter The Element of array 1"<<endl;
        for(int i=0;i<n;i++){

            cin>>arr1[i];

        }
        cout<<"Enter The Element of array 2"<<endl;
        for(int i=0;i<m;i++){

            cin>>arr2[i];

        }
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            v.push_back(arr2[i]);
        }
        sort(v.begin(),v.end());
        cout<<"The list is ";
        for(auto it:v){
            cout<<it<<" ";
            
        }
        cout<<endl;
       return 0;
    }
