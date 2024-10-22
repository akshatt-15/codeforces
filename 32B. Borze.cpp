#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
          if(s[i]=='.')
          {
              s1+='0';
          }
         if(s[i]=='-' && s[i+1]=='.')
          {
              s1+='1';
              i++;
          }
        if(s[i]=='-' && s[i+1]=='-')
        {
            s1+='2';
            i++;
        }
    }
    cout<<s1;
    return 0;
}
