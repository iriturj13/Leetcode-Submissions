class Solution {
public:
    string interpret(string command) {
        string str="";
        for(int i=0;i<command.size();){
            if(command[i]=='('&& command[i+1]=='a') {
                str=str+"al";
                i=i+4;
            }
            else if(command[i]=='(' && command[i+1]==')' ){ str=str+'o';i=i+2;}
            else{ str=str+'G';i=i+1;}
        }
        return str;
        
    }
};