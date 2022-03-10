#include<iostream>

using namespace std;
//declaring global variable 
int total_number_of_students = 10;
int cutOff = 350;
int countHowManyPassed(int score[] , int cutOff){
    int counter = 0;
    for(int i=0; i<10; i++){
        if(score[i] >= cutOff ){
            counter++;
        }
        
    }
    return counter;
}
double calculatePercentage(int score[] , int cutOff){
    double total_count = countHowManyPassed(score , cutOff);
    
    double fraction = (total_count / ::total_number_of_students) * 100;
    return fraction;
    

}
int main(){
  
    int score[] = {300 , 100 , 650 , 200 , 211 , 551 , 230 , 349 , 400 , 610 };
    cout << "The number of people passed the exams are: " << countHowManyPassed(score , ::cutOff) << endl;
    cout << "Percentage: " << calculatePercentage(score , cutOff)<<"%"<< endl;
    return 0;
}