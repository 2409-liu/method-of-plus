#include<iostream>
using namespace std;
void mysort(int x,int  y);
int main()
{
    int a, b;
    cin >> a >> b;
    mysort(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
void mysort(int* x,int*  y)
{
    if(*x>*y)
        ;
    else
    {
        int c;
        c=*x;
        *x=*y;
        *y=c;
    }
}
