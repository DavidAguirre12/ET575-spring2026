/*
David Aguirre Duran
Feb 03, 2026
Lab 5, AI assitance 
*/

//PROGRAM CREATED BY CHATGPT
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout<<"PROGRAM CREATED BY CHATGPT: "<<endl;
    string word;

    // Ask user for a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character
    if (word.length() >= 2) {
        cout << "2nd character: " << word[1] << endl;
    } else {
        cout << "Word is too short to get the 2nd character." << endl;
    }

    // Find and print the length
    cout << "Length of the word: " << word.length() << endl;

    // Replace 2 characters starting from the 3rd character
    if (word.length() >= 4) {
        string replacedWord = word;
        replacedWord.replace(2, 2, "-- $ --");
        cout << "After replacement: " << replacedWord << endl;
    } else {
        cout << "Word is too short to replace characters." << endl;
    }

    // Remove 3 characters from the end
    if (word.length() >= 3) {
        string shortenedWord = word;
        shortenedWord.erase(shortenedWord.length() - 3);
        cout << "After removing last 3 characters: " << shortenedWord << endl;
    } else {
        cout << "Word is too short to remove 3 characters." << endl;
    }





    // --- AI Assistant Used: ChatGPT ---
    // Q1) Was the code correct? (Yes/No and explain your answer)
        //Yes the code is correct because when we run the program, we can get the results that we asked for.
    // Q2) Was it readable and properly commented? explain your answer
        //Yes it is readable and properly commented because the AI explains what to do with comments on each step.
    // Q3) Were you able to explain each line of code? explain your answer
        //Yes. I am able to explain each line because the program uses simple coding.
    // Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. 
        //Yes it uses some of the concepts we learned in class, but also te program uses algorithm of conditions.
        //Some of the concept the AI used and we learne in class are: hwo to declare a variable such as string, also how to see the length of a word, and how to erase and replace terms.
        //Some of the concept we did not learned in lab yet: If and else conditions.
    // Q5) Terminal Output: (Paste the output of your program here)
            //PROGRAM CREATED BY CHATGPT: 
            //Enter a word: Juanita
            //Second character: u
            //Length of the word: 7
            //After replacement: Ju-- $ --ita
            //After removing last 3 characters: Juan












    //Program created by Copilot

    cout<<"PROGRAM CREATED BY COPILOT: "<<endl;
    string word1; 
    
    cout << "Enter a word: "; 
    cin >> word1;

    if (word1.length() >= 2) { 
        cout << "Second character: " << word1[1] << endl; 
    } else { 
        cout << "Word is too short to have a second character." << endl; 
    } 
    cout << "Length of the word: " << word1.length() << endl; 
    
    if (word1.length() >= 3) { 
        string replaced = word1; 
        replaced.replace(2, 2, "-- $ --"); 
        cout << "After replacement: " << replaced << endl; 
    } else { 
        cout << "Word is too short to replace characters." << endl; 
    } 
    
    if (word1.length() >= 3) { 
        string shortened = word1; 
        shortened.erase(shortened.length() - 3, 3); 
        cout << "After removing last 3 characters: " << shortened << endl; 
    } else { 
        cout << "Word is too short to remove 3 characters." << endl; 
    } 
    return 0; 
}

    // --- AI Assistant Used: ChatGPT ---
    // Q1) Was the code correct? (Yes/No and explain your answer)
        //Yes the code is correct because the program give us what we wanted.
    // Q2) Was it readable and properly commented? explain your answer
        //Not quite because the AI does not explain each step that it does.
    // Q3) Were you able to explain each line of code? explain your answer
        //Yes I am able to explain each line of the code because I am familiar with the terms con the codes the AI used.
    // Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
        //Yes in some lines of codes uses the concept we learned in class, but in other lines of coding uses other conceps. 
        //Some of the concept the AI used and we learne in class are: hwo to declare a variable such as string, also how to see the length of a word, and how to erase and replace terms.
        //Some of the concept we did not learned in lab yet: If and else conditions. 
    // Q5) Terminal Output: (Paste the output of your program here)
        //PROGRAM CREATED BY COPITLOT:
        //Enter a word: Juanita
        //2nd character: u
        //Length of the word: 7
        //After replacement: Ju-- $ --ita
        //After removing last 3 characters: Juan
