#include <fstream>
#include <iostream>
#include <string>

using namespace std;
#define MAX_SIZE 1000
char inputString[MAX_SIZE];

int main(int argc, char *argv[]){
    if(argc > 1){
        // cout << "argv[1] = " << argv[1] <<endl;
    }else{
        cout << "No file name entered!" << endl;
    }
    ifstream infile(argv[1]);

    if(infile.is_open()){
        string line ="";
        int count = 0;
        while(!infile.eof()){
            count = count + 1;
            string firstLine[7];
            if(count == 1){
                infile.getline(inputString, 100);
                std::string s = inputString;
                std::string delimiter = "\t";
                for(int i =0;i<7;i++){
                    size_t dl = s.find(delimiter);
                    std::string token = s.substr(0, dl);
                    firstLine[i] = token;
                    s.erase(0, dl + delimiter.length());
                    cout << token+"\n"<<endl;
                }
                // for(int i = 0; i<7;i++){
                //     std::string fword = s.substr(0,s.find(delimiter));
                //     // std::string a = s.substr(s.find(delimiter, s.size()-1));
                //     // s = a;
                //     firstLine[i] = fword;
                //     cout << fword +"\n" <<endl;
                // }
            }else{
                infile.getline(inputString, 100);
                // printf("%s\n",inputString);
            }
            
        }
    }
    return 0;
}