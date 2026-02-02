/*
David Aguirre 
Lab4, string and string methods
Feb 2, 2026
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n-----Example 1: string indexing-----"<<endl;
    //Each character in a string can be accessed by its index number
    //Index starts from 0, most-left character 
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3rd character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n-----Example 2: string length-----"<<endl;
    //Lenght method returns the amoung of character in a string
    int firstname_length = firstname.length();
    cout<<"The first name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n-----Example 3: add or concatenate-----"<<endl;
    // + operator adds or concatenates strings
    string color = "orange";
    string animal = "cat";
    string addstrings = "My "+ animal + " loves " + color + " toys";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n-----Example 4: substract character from a string-----"<<endl;
    // substr() method substract(extracts) characters from a string
    // substr(index from where the substraction will happen, amount from characters to be extracted)
    string city = "Bayside";
    string sub_char = city.substr(3,4); // substract 4 characters from index 3
    cout<<"Substracted characters = "<<sub_char<<endl;

    cout<<"\n-----Example 5: Insert characters into a string-----"<<endl;
    // Insert new characters into a string
    // Insert(index from where the new characters will be inserted, characters to be inserted)
    // Insert Queens- inti Bayside. The result should be = BayQueens-side
    city.insert(3, "Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n-----Example 6: add characters to the end of a string-----"<<endl;
    // append method adds characters to the end of a string 
    string fullname = "Peter Pan";
    // add the word '@neverland' to the end of the dull name. The result should be Peter "Pan@neverland"
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n-----Example 7: replace characters in a string-----"<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happen, amount of characters to be replaced, string og new replace character)
    string word = "engineering";
    cout<<"Original word = "<<word<<endl;
    //replace the word 'ee' with 'FUTURE'. The result will be "enginFUTUREring"
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n-----Example 8: erase character in a string-----"<<endl;
    // erase(index where the erase will happen, amount of characters to be erased)
    string word2 = "layout";
    cout<<"Original word = "<<word2<<endl;
    //erase 'you' from word. The result should be 'lat'
    word2.erase(2,3); //erase 3 characters from index 2
    cout<<"After erase method = "<<word2<<endl;

    cout<<"\n-----Example 9: find characters in a string-----"<<endl;
    // find method returns the index of the first found character
    string word3 = "characters";
    //find letter 'a' from word
    int index_a = word3.find("a");
    cout<<"Index for a = "<<index_a<<endl;
    // find the index for 'act'
    cout<<"Index for 'act' = "<<word3.find("act")<<endl;

    cout<<"------Exercises------"<<endl;
    // collect a new word
    string word4; 
    cout<<"Enter a new word: "<<endl;
    cin>> word4;
    cout<<"2nd character: "<<word4[1]<<endl;
    int word4_length = word4.length();
    cout<<"Your word has "<<word4_length<<" characters"<<endl;
    word4.replace(2,2,"--$--");
    cout<<"Replace word = "<<word4<<endl;
    word4.erase(word4_length-3);
    cout<<"Remove end characters: "<<word4<<endl;

    return 0;
}