// Last updated: 7/2/2025, 11:52:11 PM
class MyCalendar {
public:
    map<int, int> events_starts_ends;
    int total;
    MyCalendar() {
        total = 0;
    }
    
    bool book(int start, int end) {
        total = 0;
        events_starts_ends[start]++;
        events_starts_ends[end]--;

        for(auto [key, val] : events_starts_ends){
            total += val;
            if(total > 1){
            events_starts_ends[start]--;;
            events_starts_ends[end]++;;
            return false;
        }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */