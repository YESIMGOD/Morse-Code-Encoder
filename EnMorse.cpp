#include <bits/stdc++.h>
using namespace std;
string enmorse(char m)
{
    if(isupper(m))
    {
        m=tolower(m);
    }
    switch (m)
    {
        case 'a':
        return ".-";
        
        case 'b':
        return "-...";
        
        case 'c':
        return "-.-.";
        
        case 'd':
        return "-..";
        
        case 'e':
        return ".";
        
        case 'f':
        return "..-.";
        
        case 'g':
        return "--.";
        
        case 'h':
        return "....";
        
        case 'i':
        return "..";
        
        case 'j':
        return ".---";
        
        case 'k':
        return "-.-";
        
        case 'l':
        return ".-..";

        case 'm':
        return "--";

        case 'n':
        return "-.";

        case 'o':
        return "---";

        case 'p':
        return ".--.";

        case 'q':
        return "--.-";

        case 'r':
        return ".-.";

        case 's':
        return "...";

        case 't':
        return "-";
        
        case 'u':
        return "..-";
        
        case 'v':
        return "...-";
        
        case 'w':
        return ".--";
        
        case 'x':
        return "-..-";
        
        case 'y':
        return "-.--";
        
        case 'z':
        return "--..";

        case '0':
        return "-----";

        case '1':
        return ".----";

        case '2':
        return "..---";

        case '3':
        return "...--";

        case '4':
        return "....-";

        case '5':
        return ".....";

        case '6':
        return "-....";

        case '7':
        return "--...";

        case '8':
        return "---..";

        case '9':
        return "----.";

        case ' ':
        return " ";
        
        default:
        cout<<"Invalid Entry: "<<m<<' '<<endl;
        exit(0);
    }
}
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;str[i];i++)
    {
        cout<<enmorse(str[i]);
    }
    return 0;
}