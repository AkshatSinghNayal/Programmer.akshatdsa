#include<iostream>
using namespace std;
void function (int n){
 
int i =1 ; 
char ch = 'D';
while (ch>='A')
{
    int j =1 ;
    char ch1 = ch  ;
    while (j<=i)
    {
        cout<<ch1 << " ";
        j++;
        ch1++;
        cout<<ch<<endl;
    }
    cout<<endl;
    ch--;
    i++;
}



}


int main(){
    int n ;
     cout<<"enter the value of n :";
    cin>>n;
    function(n);
    return 0;
}

 