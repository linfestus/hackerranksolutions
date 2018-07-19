#include <bits/stdc++.h>

using namespace std;

string isValid(string s) {
    int freq1=0,temp;
    vector<int> vec(26,0);
    for(char ch:s){
        vec[(int)ch-97]++;
    }
    temp=vec[0];
    for(int i=0;i<26;i++){
        if(vec[i]<temp&&vec[i]>0)
            temp=vec[i];
    }
     for(int i=0;i<26;i++){
         cout<<vec[i]<<endl;
        if(vec[i]>temp)
            freq1+=(vec[i]-temp);
    }
    if(freq1==0||freq1==1)
        return "YES";
    else
        return "NO";
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
