#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n = 0;

    cout << "Enter number of votes : ";
    cin >> n;

    if(n < 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    vector<int> validVotes;

    int duplicateCount = 0;

    for(int i = 0; i < n; i++){

        int id;

        cout << "Enter voter ID : ";
        cin >> id;

        if(id < 0){
            cout << "Invalid Voter ID" << endl;
            return 0;
        }

        bool duplicate = false;

        for(int j = 0; j < validVotes.size(); j++){

            if(validVotes[j] == id){
                duplicate = true;
                break;
            }
        }

        if(duplicate){
            duplicateCount++;
        }
        else{
            validVotes.push_back(id);
        }
    }

    cout << "Valid Votes: " << validVotes.size() << endl;
    cout << "Rejected Duplicate Votes: " << duplicateCount << endl;

    return 0;
}