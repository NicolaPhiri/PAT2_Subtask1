//Morse Code Practical
#include <iostream>
using namespace std;
int main(){
{
    /*Morse & alphabet array declaration*/
    string strMorseArr[26]= {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--.."};
    string strAlphabet[26] = {"A", "B", "C", "D", "E","F", "G", "H", "I", "J", "K", "L" , "M", "N", "O", 
                    "P","Q","R","S","T","U","V","W","X","Y","Z"};
                    
    /*Assigning the morse to an alphabet*/
    memcpy(strMorseArr, strAlphabet, sizeof(strMorseArr));
};
//Request that the user enters the message
string ConvertableMessage;
cout<< "Please enter your desired converted message";
getline(cin,ConvertableMessage);//separation of characters in entered message
{
string MorseMessage(char ch){
    ch = toupper(ch); //Upper case conversion
    int index = ch - 'A';
    if (index>= 0 && index < 26){
        returne Code strMorseArr[26];
    } 
    else if (ch == ' '){
        return "\n"; //spaces
    } 
    else 
    {
        return "Invalid character";
    }
}
}
 //Call code into main library
string Conversion = AlphaToMorse(ConvertableMessage);
cout<< "Your message was"<<" "<< ConvertableMessage<<" "<< "and your morse converion is:"<< "\n "<< AlphaToMorse;
    return 0;
}
