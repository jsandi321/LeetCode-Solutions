class Solution {
public:
    
    
    long int binarySearch(unsigned long n){
        unsigned long left = 0;
        unsigned long right = n + 1;
        
        while(left < right){
            unsigned long mid = left + (right - left) / 2;
            if(mid*mid > n){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left - 1;
    }
    
        
    
    int mySqrt(int x) {
        return binarySearch(x);
    }
    
};