#include<iostream>

using namespace std;

bool isValid(){
    int score;
    if( score <= 0 && score >= 100){
        return true;
    }else{
        return false;
    }
}
string grader(int score){
    if(isValid){
        if(score <= 100 && score >= 90){
            return "A+";
        }else if(score < 90 && score >=80){
            return "A";
        }else if(score  < 80 && score >=70 ){
            return "B";
        }else if(score  < 70 && score >=60 ){
            return "C";
        }else if(score  < 60 && score >=50 ){
            return "D";
        }else if(score  < 50 && score >= 0){
            return "F";
        }

    }else{
        return "THE SCORE IS NOT VALID";
    }
}
int main(){
    int score;
    cout << "ENTER YOUR GRADE OUT 100: ";
    cin >> score;
    cout << "your status: " << grader(score) << endl;

    return 0;
}

