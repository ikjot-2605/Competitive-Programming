#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the contacts function below.
 */
bool isPrefix(string a,string b){
    //checks if string a is prefix of string b
    for(int i=0;i<min(a.length(),b.length());i++){
        if(a[i]!=b[i])return false;
    }
    if(a.length()<=b.length())return true;
    return false;
}
vector<int> contacts(vector<vector<string>> queries) {
    int  q = queries.size();
    vector<string> strings;
    vector<int> answers;
    for(int i =0;i<q;i++){
        if(queries[i][0]=="add"){
            strings.push_back(queries[i][1]);
        }
        else{
            int count =0;
            for(int j =0;j<strings.size();j++){
                if(isPrefix(queries[i][1],strings[j])){
                    count++;
                }
            }
            answers.push_back(count);
        }
    }
    return answers;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int queries_rows;
    cin >> queries_rows;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<string>> queries(queries_rows);
    for (int queries_row_itr = 0; queries_row_itr < queries_rows; queries_row_itr++) {
        queries[queries_row_itr].resize(2);

        for (int queries_column_itr = 0; queries_column_itr < 2; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = contacts(queries);
    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
