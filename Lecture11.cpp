// #include<iostream>
// using namespace std;
// void count(int n)
// {
//     if(n==0)
//         return;

//     cout<<n<<endl;
//     count(n-1);


// }
// int main()
// {
//     count(5);
// }
// #include<iostream>
// using namespace std;
// int Factorail(int a)
// {
//     if (a==1)
//         return 1;
        
//     return a*Factorail(a-1);
// }
// int main()
// {
//     cout<<Factorail(6);
// }

// Project : Calculate Fibonacci number using recursion
#include<iostream>
using namespace std;
int sumdigit(int n)
{
    if (n==0)
        return 0;
    return (n%10 + sumdigit(n/10));

}
int main()
{
    cout<<sumdigit(12345);
}