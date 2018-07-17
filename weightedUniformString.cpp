#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    int count=0,temp=0;
    set<int> myset;
    set<int>::iterator it;
    vector<string> ans;
    
    for(int i=0;i<s.length();i++){
        temp=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]!=s[j])
                break;
            temp=j-i+1;
        }
        count=temp*((int)s[i]-96);
        myset.insert(count);
    }
    cout<<endl;
    for(int i=0;i<queries.size();i++){
        it=myset.find(queries[i]);
        if(it!=myset.end()){
            ans.push_back("Yes");
        }
        else
            ans.push_back("No");
    }
    return ans;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
