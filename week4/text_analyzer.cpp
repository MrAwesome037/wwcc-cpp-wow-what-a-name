#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string sentence;
    string upper;
    string lower;
    int sentences = 0;
    print("Enter a sentence or paragraph: ")
    getline(cin, sentence);
    int characters = sentence.length();
    string stripped = sentence;
    for(i = 0; i <= characters; i++){
      if(sentence[i] == "." or sentence[i] == "!" or sentence[i] == "?"){
        sentences += 1;
      }
        upper += toupper(sentence[i]);
        lower += tolower(sentence[i]);
    }
    for(i = 0; i <= stripped.length(); i++){
        if(ispunct(stripped[i])){
            stripped.erase(i--, 1);
        }
    }
    stringstream ss(stripped);
    words = ss.length();
    string longestword = ss[0];
    for(i = 0; i <= words; i++){
        if(ss[i].length() > longestword.length()){
            longestword = ss[i];
        }
    print("Analysis: ");
    printf("Characters (with spaces): %d", characters);
    printf("Word count: %d", words);
    printf("Sentence count: %d," sentences);
    print("Longest word: " + longestword);
    printf("Average word length: %f characters", stripped.length()/words);
    print("Uppercase: " + upper);
    print("Lowercase: " + lower);
    return 0;
}
