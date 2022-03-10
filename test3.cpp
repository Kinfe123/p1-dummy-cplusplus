
#include <iostream>

using namespace std;

int *extractDigits(int number ){
 
    int c = 0; /* digit position */
    int n = number;

    while (n != 0)
    {
        n /= 10;
        c++;
    }

    int *numberArray = new int[c];
    
    c = 0;    
    n = number;
    
    /* extract each digit */
    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }
    
    
    return numberArray;
  
    
    
}

int sumDigits(int numberArray[] , int lenght){
    int result = 0;
    for(int i=0; i<lenght; i++){
        
        result += numberArray[i] * numberArray[i] * numberArray[i];
        
    }
    return result;
}
bool isArmstrong(int numberArray[] , int number , int lenght){
    int* check = extractDigits(number);
    if(number == sumDigits(check , lenght)){
        return true;
    }else {
        return false;
    }
    
}
int main()
{
    int number;
    cout << "Enter the integer value: " ;
    cin >> number;
    int lenght;
    int *p = extractDigits(number);
    cout << "Enter the lenght of the integer: " ;
    cin >> lenght ;
    
    cout << "The sum of the cube of the digits is: "<< sumDigits(p , lenght) << endl;;
    if(isArmstrong(p , number , lenght)){//if the func return true
        cout << "Yo it is Armstrong" << endl;
    }else {//if the func return false
        cout << "Nah it is not Armstrong " << endl;
    }
   
        

    return 0;
}