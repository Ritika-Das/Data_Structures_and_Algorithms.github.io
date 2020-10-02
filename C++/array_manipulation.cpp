#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries,int m) {
    int arr[n],arr2[n];
    for(int j =0 ;j<n;j++){
        arr[j]=0;
        arr2[j]=0;
    }
    
    
for (int i=0;i<m;i++){
    vector<int> p =queries[i];
    int a=p[0];
    int b=p[1];
    int k=p[2];
    arr[a+1]=arr[a+1]+k;
    if(a+1<n && b+2<n){
    arr[b+2]=arr[b+2]-k;
    }

}
arr2[0]=arr[0];
for (int h=1;h<n;h++){
    arr[h]=arr[h]+arr[h-1];


}
int g=0;
for (int l=0;l<n;l++){
    if(g<=arr[l]){
        g=arr[l];
        
    }
}
return g;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries,m);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
