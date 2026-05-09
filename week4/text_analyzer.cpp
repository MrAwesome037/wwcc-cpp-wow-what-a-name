#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string sentence;
    int sentences = 0;
    print("Enter a sentence or paragraph: ")
    getline(cin, sentence);
    int characters = sentence.length();
    string stripped = sentence;
    stringstream ss(sentence);
    string longestword = ss[0];
    words = ss.length();
    for(i = 0; i <= characters; i++){
      if(sentence[i] == "." or sentence[i] == "!" or sentence[i] == "?"){
        sentences += 1;
      }
    }
    for(i = 0, 
    if(ss[i].length() > longestword.length()){
        longestword = ss[i];
      }
    print("Analysis: ");
    printf("Characters (with spaces): %d", characters);
    printf("Word count: %d", words);
    printf("Sentence count: %d," sentences);
    print("Longest word: " + longestword);
    printf("Average word length: %f characters", stripped.length()/words);
    return 0;
}
