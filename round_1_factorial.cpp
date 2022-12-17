#include<iostream>
using namespace std;

#define MAXI 500

int mux(int x, int res[], int res_size);

void facii(int n)
{
    int res[MAXI];

    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        res_size = mux(x, res, res_size);
    }

    cout << "factorial of given number is \n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

int mux(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry  = prod/10;    
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n; cin>>n;
    if(n<100) cout<<"the no is less than 100 ";
    else 
    facii(n);
    return 0;
}