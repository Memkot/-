#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("file1.txt",ios_base::in);
    string text;
    int symb[256];
    for(int i=0;i<256;i++){
        symb[i]=0;
    }
    getline(fin,text);
    cout<<text;
    fin.close();
    for(int i=0;i<text.length();i++){
        symb[int(text[i])]++;
    }
    ofstream fout;
    fout.open("file2.txt",ios_base::out);
    for(int i=0;i<256;i++){
        if(symb[i]!=0){
            fout<<"Символ "<<char(i)<<" встречается "<<symb[i]<<" раз\n";
            cout<<"Символ "<<char(i)<<" встречается "<<symb[i]<<" раз\n";
        }
    }
    fout.close();
}
