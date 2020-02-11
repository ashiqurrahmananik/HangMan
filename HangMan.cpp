#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100]="hangman",ah[100],bh[100];
    vector<char>v;
    for(int i=0; ch[i]!='\0'; i++)
    {
        if(i>3)
        {
            cout<<ch[i];
            v.push_back(ch[i]);
        }
        else
        {
            cout<<"-";
        }
    }
    cout<<endl;
    cin.getline(ah,100);
    int c=-1;
    for(int j=0; ah[j]!='\0'; j++)
    {
        c++;
        bh[c]=ah[j];
    }
    for(int i=0; i<v.size(); i++)
    {
        c++;
        bh[c]=v[i];
    }
    if(strcmp(ch,bh)==0)
    {
        cout<<"You Win"<<endl;
    }
    else
    {
        int k=0;
        for(int i=0; ch[i]!='\0'; i++)
        {
            if(ch[i]!=bh[i])
            {
                k++;
            }
        }
        if(k==3)
        {
            cout<<"Score:"<<4-k<<endl;
            printf("  _______\n");
            printf("  |/   | \n");
            printf("  |    O \n");
            printf("  |   \\|/\n");
            printf("  |    | \n");
            printf("  |   /\n");
            printf("__|_________\n\n");

        }
        if(k==2)
        {
            cout<<"Score:"<<4-k<<endl;
            printf("  _______\n");
            printf("  |/   | \n");
            printf("  |    O \n");
            printf("  |   \\| \n");
            printf("  |    | \n");
            printf("  |   /\n");
            printf("__|_________\n\n");

        }
        if(k==1)
        {
            cout<<"Score:"<<4-k<<endl;
            printf("  _______\n");
            printf("  |/   | \n");
            printf("  |    O \n");
            printf("  |   \\| \n");
            printf("  |    | \n");
            printf("  |     \n");
            printf("__|_________\n\n");

        }
        if(k==4)
        {
            cout<<"Score:"<<4-k<<endl;
            printf("  _______\n");
            printf("  |/   | \n");
            printf("  |    X \n");
            printf("  |   \\|/\n");
            printf("  |    | \n");
            printf("  |   / \\\n");
            printf("__|_________\n\n");
        }
    }

}
