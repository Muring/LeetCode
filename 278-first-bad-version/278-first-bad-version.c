// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    double start = 1;
    double end = n;
    double mid = 0;
    
    while(start < end){
        mid = (start + end) / 2;
        
        if(isBadVersion(mid) == true)
            end = mid;
        else
            start = mid + 1;
    }
    return start;
}