// Last updated: 7/2/2025, 11:51:58 PM
class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        for(int i=0;i<image.length;i++)
        {
            int low = 0;
            int high = image[i].length-1;
            while(low <= high)
            {
                if(image[i][low] == image[i][high])
                {
                    image[i][low]  = 1-image[i][low];
                    image[i][high] = image[i][low];
                }
                low++;
                high--;
            }
        }
        return image;
    }
}