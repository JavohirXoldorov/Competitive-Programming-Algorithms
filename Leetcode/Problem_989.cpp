class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
     int n = A.size(), d = 0,num = 0;
        while(K > 0 || n > 0){
            d += K % 10;
            if(n >= 1)
            num = A[n-1];
            d += num;
            if(n >= 1){
                 A[n-1] =d % 10;
            }else{
                A.insert(A.begin(), d % 10);
            }
           
            d /= 10;
            K /= 10;
            n--;
            num = 0;
        }
        while(d > 0){
             A.insert(A.begin(), d % 10);
            d /= 10;
        }
        return A;
    }
};