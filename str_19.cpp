#include<bits/stdc++.h>
#include <iostream>
using namespace std;

string find(string str1)
{
    string str[] = {"2","22","222", 
                    "3","33","333", 
                    "4","44","444", 
                    "5","55","555", 
                    "6","66","666", 
                    "7","77","777","7777", 
                    "8","88","888", 
                    "9","99","999","9999"
                   }; 
                   
    int n=str1.size();
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(str1[i]==' ')
        {
            ans=ans+"z";
        }
        else
        {
            ans=ans+str[str1[i]-'A'];
        }
    }
    return ans;
}


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    string ans=find(str);
	    cout<<ans;
	    cout<<endl;
	}
	return 0;
}
