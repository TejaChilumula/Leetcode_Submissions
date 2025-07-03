// Last updated: 7/2/2025, 11:51:16 PM
class Solution {
    public String defangIPaddr(String address) {
        address = address.replace("." , "[.]");
        
        return address;
        
    }
}