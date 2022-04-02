class Solution {
public:
    string interpret(string command) {
        //int size=0;
       // string res="";
        for(int i=0;i<command.length();++i)
        {
           if(command.compare(i,2,"()")==0)
               command.replace(i,2,"o");
            else if(command.compare(i,4,"(al)")==0)
                command.replace(i,4,"al");
            
        }
        return command;
    }
};