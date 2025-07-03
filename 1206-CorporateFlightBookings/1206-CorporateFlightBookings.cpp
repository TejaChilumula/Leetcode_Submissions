// Last updated: 7/2/2025, 11:51:14 PM
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        // line sweep , we only care abou the start and end

        // TRICK ---- Here we wont deduct at end, instead we add till end
            // ----- So, **** we deduct after end, i.e end+1

            vector<int> flights(n+1,0);

            for(int i=0;i<bookings.size();i++){
                int booking_seats_from = bookings[i][0]-1;
                int booking_seats_to = bookings[i][1]; // we can deduct at this

                flights[booking_seats_from] += bookings[i][2];
                flights[booking_seats_to] -= bookings[i][2];

            }
            int total_bookings = 0;
            for(int i=0;i<=n;i++){
                total_bookings += flights[i];
                flights[i] = total_bookings;
            }
        
        flights.pop_back();
        return flights;
    }
};