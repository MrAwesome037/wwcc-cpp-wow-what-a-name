#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    vector<int> grades[5];
    int score;
    double average = 0.0;
    char average_grade;
    int highest = 0;
    int highest_quiz = 0;
    int lowest = 100;
    int lowest_quiz = 0;
    int As = 0;
    int Bs = 0;
    int Cs = 0;
    int Ds = 0;
    int Fs = 0;
    for (int i = 1; i <= 6; i++) {
        printf("Enter Score for Quiz #%d (0-100): ", i);
        cin >> score;
        grades.push_back(score);
    }
    print("Quiz Results: ");
    for (int i = 0; i <= 5; i++){
        average += grades[i];
        if(90 <= grades[i] <= 100){
            printf("Quiz %d: %d (A)", i, grades[i]);
          As += 1;
        }
        else if(80 <= grades[i] <= 89){
            printf("Quiz %d: %d (B)", i, grades[i]);
          Bs += 1;
        }
        else if(70 <= grades[i] <= 79){
            printf("Quiz %d: %d (C)", i, grades[i]);
          Cs += 1;
        }
        else if(60 <= grades[i] <= 69){
            printf("Quiz %d: %d (D)", i, grades[i]);
          Ds += 1;
        }
        else{
            printf("Quiz %d: %d (F)", i, grades[i]);
          Fs += 1;
        }
        if(grades[i] < lowest){
            lowest = score;
            lowest_quiz = i + 1;
        }
        if(grades[i] > highest){
            highest = score;
            highest_quiz = i + 1;
        }
    }
    average = average/5;
    if(90 <= average <= 100){
        average_grade = "A";
    }
    else if(80 <= average <= 89){
        average_grade = "B";
    }
    else if(70 <= average <= 79){
        average_grade = "C";
    }
    else if(60 <= average <= 69){
       average_grade = "D";
    }
    else{
       average_grade = "F";
    }
    print("Statistics: ");
    printf("Average Score: %f", average);
    printf("Highest Score: %d (Quiz %d)", highest, highest_quiz);
    printf("Lowhest Score: %d (Quiz %d)", lowest, lowest_quiz);
    printf("Overall Grade: %c", average_grade);
    print("Grade Distribution");
    printf("A: %d", As);
    printf("B: %d", Bs);
    printf("C: %d", Cs);
    printf("D: %d", Ds);
    printf("F: %d", Fs);
    return 0;
}
