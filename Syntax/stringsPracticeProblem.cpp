#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <map>
#include <sstream>
using namespace std;

int main() {    
    int N,Q;
    std::map<string, string> valid_paths;
    
    cin >> N >> Q;
    // Build the valid paths while processing
    string tag;
    list<string> current_path;
    std::getline(std::cin, tag);
    while(N--){
        std::getline(std::cin, tag);                
        // If it's a openning tag, append the name to the 
        // current path with the delimiter char '.' and
        // process the attributes
        if(tag[1] != '/'){
            if(!current_path.empty()){
                current_path.push_back(".");    
            }            
            std::istringstream iss(tag);
            std::string token;
            while (std::getline(iss, token, ' ')){
                if(token[0] == '<'){                    
                    // It's the tag name
                    current_path.push_back(token.substr(1,token.find_last_of('>')-1));                    
                }else{
                    // It's a attribute name
                    // Flatten the current path and add it to the map
                    // of the valid paths
                    std::string atrr_name = token;
                    std::string atrr_value;
                    std::string valid_path;
                    for(string s : current_path){
                        valid_path += s;
                    }
                    std::getline(iss, token, ' '); // Get the '='
                    std::getline(iss, token, ' '); // Get the attr-value
                    atrr_value = token.substr(1,token.find_last_of('"')-1);
                    
                    valid_path += "~"+atrr_name;                    
                    valid_paths[valid_path] = atrr_value;
                }
            }            
        // If it's a closing tag, remove the tag name
        // from the current path (and the '.' if necessary) 
        }else{
            current_path.pop_back();
            if(!current_path.empty()){
                current_path.pop_back();  
            }          
        }        
    }
    
    while(Q--){
        string query;
        cin >> query;
        
        string query_result = valid_paths[query];
        if(query_result.empty()){
            query_result = "Not Found!";
        }
        cout << query_result << endl;
    }
    
    return 0;
}