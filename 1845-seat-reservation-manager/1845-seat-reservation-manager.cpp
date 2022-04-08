class SeatManager {
public:
    priority_queue <int, vector<int>, greater<int>> minh;
    SeatManager(int n) {
        for(int i=1;i<=n;++i)
        {
            minh.push(i);
        }
    }
    
    int reserve() {
        int r=minh.top();
        minh.pop();
        return r;
    }
    
    void unreserve(int seatNumber) {
        minh.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */