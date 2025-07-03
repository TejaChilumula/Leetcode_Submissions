// Last updated: 7/2/2025, 11:50:22 PM
class Solution {
    public String interpret(String command) {
     command = command.replace("()" , "o");
        command = command.replace("(al)" , "al");

        return command;
    }
}