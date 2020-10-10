#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int binaryTree(int h){
    if(h==0 || h==1) 
        return 1;
    int m=pow(10,9)+7;
    int x=binaryTree(h-1);
    int y=binaryTree(h-2);
    long res1=(long)x*x;
    long res2=(long)x*y*2;
    int ans1=(int)(res1%m);
    int ans2=(int)(res2%m);
    int result=(ans1+ans2)%m;
    return result; 
 }
int main()
{
   cout<<binaryTree(6); 
   
   return 0;
}
