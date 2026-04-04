class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();
        if (n1 > n2) return false;

        int arr[128] = {0};
        for(char c : s1) arr[(int)c]++;

        for(int i = 0; i <= n2 - n1; i++) {
            int arr2[128] = {0}; 
            string tar = s2.substr(i, n1);
            
            for(int w = 0; w < n1; w++) {
                char c = tar[w]; 
                arr2[(int)c]++;
            }

            int cnt = 0;
            for(int j = 0; j < 128; j++) {
                if(arr[j] == arr2[j]) cnt++;
            }
            if(cnt == 128) return true;
        }
        return false;
    }
};
