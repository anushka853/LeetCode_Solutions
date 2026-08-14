class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<vector<int>>arr;
        int n=score.size();
        for(int i=0;i<n;i++){
            arr.push_back({score[i],i});
        }
        sort(arr.begin(),arr.end());
        vector<string>result(n);
        for(int i=n-1;i>=0;i--){
            int idx=arr[i][1];
            if(i==n-1){
                result[idx]="Gold Medal";
                 }
                 else if(i==n-2){
                    result[idx]="Silver Medal";
                 }
                 else if(i==n-3){
                    result[idx]="Bronze Medal";
                 }
                 else{
                    result[idx]=to_string(n-i);
                 }
        }
        return result;
    }
};
