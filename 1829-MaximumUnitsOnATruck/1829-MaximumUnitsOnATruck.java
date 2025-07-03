// Last updated: 7/2/2025, 11:50:19 PM
class Solution {
    public int maximumUnits(int[][] boxTypes, int truckSize) {
        Arrays.sort(boxTypes , (a,b) -> Integer.compare(b[1] , a[1]));
        int i=0;
        int sum=0;
   
            
        while(i < boxTypes.length)
        {
            if(truckSize>=boxTypes[i][0])
            {
                sum=sum+(boxTypes[i][0]*boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else
            {
                sum = sum+ (boxTypes[i][1] * truckSize);
                return sum;
            }
            i++;
            
        }
    
        return sum;
    }
}