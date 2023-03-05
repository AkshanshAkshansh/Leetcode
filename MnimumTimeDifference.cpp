class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutesArray;
        
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];            
            int hours=stoi(curr.substr(0,2));
            int minutes=stoi(curr.substr(3,2));
            int totalMinutes=hours*60+minutes;
            minutesArray.push_back(totalMinutes);
        }        
        
        sort(minutesArray.begin(),minutesArray.end());
        
        int n=minutesArray.size();
        int mini=INT_MAX;
        
        for(int i=0;i<n-1;i++){
            int diff=minutesArray[i+1]-minutesArray[i];
            mini=min(diff,mini);
        }
        
        int lastDiff1=(minutesArray[0] + 1440)-minutesArray[n-1];
        int lastDiff2=(minutesArray[n-1]-minutesArray[0]);
        int lastDiff=min(lastDiff1, lastDiff2);
        return min(mini,lastDiff);
    }
};