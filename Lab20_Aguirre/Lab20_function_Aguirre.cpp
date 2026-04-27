/*
David Aguirre
April 27,2026
Lab 20 parsing and file handling
*/

#include <iostream>
using namespace std;

//Example 1: Using cin to validate aa data type
//If the input is a proper data type, cin will set a state to 'goodbit'
//If the input is not a proper data type, cin will set a state to 'failbit'

//Function to collect and return an integer
int collectnumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(cin.fail()){
        cout<<"Wrong data type! "<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        //recollect the number
        return collectnumber();
    }
    else{
        return n;
    }
}

//Example 2: Read files
//Input file = ifstream
//Output file = ofstream
//fstream has ifstream and ofstream
//after the library, w4e can declare an ifstream and ofstream objects
#include<fstream>
void readfile(){
    //declare an object to handle ifstream
    ifstream fin;
    //declare a variable to hold each line of the read file
    string line;
    //Declare a variable as a line counter
    int linecounter = 1; //first line
    //Open the file
    fin.open("sample.txt");
    //Use a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence = "<<linecounter<<" = "<<line<<endl;
        linecounter++;
    }

    //Close the file input when finished reading
    fin.close();
}

//Example 3: Write files
//Function to write or create a new file
void writefile(string filename){
    //Declare an object to handle output files, fout
    ofstream fout;
    //Open the file
    //Id the file exists, it will overwrited
    //If the file doesn't exist, it will create a new file
    fout.open(filename);
    //Write "Student's full name" in the first line of file
    fout<<"David Aguirre \n";
    fout<<"Lab 20, file streaming \n";
    fout<<"April 27, 2026";
    //Close the file output when finished writing 
    fout.close();
}

//Example 4: Append data into an existing file
void appendmsg(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    //Append the following data
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    fout<<"GAME OVER \n"<<msg<<endl;

    fout.close();
}