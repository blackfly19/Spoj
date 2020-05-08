#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t = 1;
    while(1)
    {
        int col,row,skip1,skip2,pos;
        string code;
        cin>>col;
        if(col == 0)
            break;
        cin>>code;
        row = code.length()/col;
        for(int i=0;i < col;i++)
        {
            skip1 = col-i;
            skip2 = i;
            pos = i;
            for(int j=0;j < row;j++)
            {
                cout<<code[pos];
                if(j%2==0)
                    pos =pos+ (2*skip1-1);
                else
                    pos = pos+(2*skip2+1);
            }
        }
        cout<<"\n";
    }
}
