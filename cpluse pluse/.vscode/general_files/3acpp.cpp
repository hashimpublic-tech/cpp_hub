/*#include<iostream>
using namespace std ;
int main(){
    int number ;
     
    cout << " enter a number : "<< endl;
    cin >> number ;

    if (number%2 == 0){
        cout << " number is even  : "<< number << endl;

    } else {
        cout << " number is odd : " << number << endl; 
    }return 0;
}*/



//****** GET NUMBER  AND TAKE SQUARE OF THIS NUMBER IF IT IS 10 - 100 ***********


/*#include<iostream>
using namespace std ;
int main(){
    int number ;
    cout << " enter a number : " << endl;
    cin >> number ;

    if (number >=10 && number <=100){
        cout << "square of number is : " << number*number << endl;
    }else {
        cout << " you entered a wrong number : " << endl;
    }return 0 ;
}*/


//

//*********** IF A PERSON DO WORK OVERTIME *******************


/*#include<iostream>
using namespace std ; 
int main (){
    int hours ;
    int salary = 100 ;

    cout << " enter your hours : " << endl;
    cin >> hours ;

    int totalSalary = hours * salary ;
    int overtime = hours - 40 ;
     
    if (hours <= 40 ){
        cout << " your salary is  : " << totalSalary << endl;
    }else{
        totalSalary = totalSalary + overtime * salary *2 ;
        cout << " your salary is : " <<  totalSalary << endl;
    }
    
    return 0;

}*/





/*#include<iostream>
using namespace std ;
int main(){
    int a ;
    int b ;
    int c ;

    cout << " enter a number :" << endl;
    cin >> a ;
    cout << " enter b nimber : " << endl; 
    cin >> b ;
    cout << " enter c number : " << endl;
    cin >> c ;

    if (a==b){
        if (b==c)
            cout << " a , b and c are same : "<< a << " " << b << " " << c << " " << endl; 
        }else {
            
            cout << " a and b are different  : " << a <<b << c<< endl;
        }return 0 ;
}*/


//************ PAY TAX  FROM THE SALARY ***************** */




/*#include<iostream>
using namespace std ;
int main(){
    int salary ;
    int tax ;

    cout << " enter your salary : " << endl;
    cin >> salary ;
    

    if(salary > 50000){
        cout << " your salary is above 50k : " << salary << endl;
        cout << " you have to pay 5% tax from salary which become  : " << salary * 0.05 << endl; 
    }else if
    (salary >= 30000 && salary <=50000){
        cout << " your salary is 30k - 50k : " << salary << endl;
        cout << " you have to pay 3% tax  which become:  " << salary * 0.03 ; 
    }else{
        cout << " your salary is less then 30k : " << salary << endl;
        cout << " you have to pay 2% tax  which become : " << salary * 0.02 << endl;
    }return 0 ;
}*/









//************* SWITCH STATEMENTS *************




/*#include<iostream>
using namespace std ;
int main(){
    int days ;
    cout << " enter a day to find from 1 - 7 : " << endl;
    cin >> days ;
    switch(days){
        case 1 :
        cout << " Monday : " <<endl;
        break;
        case 2:
        cout << " tuesday : " << endl;
        break;
        case 3:
        cout << " wednesday : " << endl;
        break;
        case 4:
        cout << " thursday : "<< endl;
        break;
        case 5:
        cout << " friday : " << endl;
        break;
        case 6:
        cout << " its weekend , Saturday : " << endl; 
        break ;
        case 7:
        cout << " its weekend , Sunday : " << endl; 
        default:
    cout << "invalid day : " << endl;}   

}*/





 


/*#include<iostream>
using namespace std ;
int main(){
    char grade ;
    cout << " enter your grade :  " << endl;
    cin >> grade ;
    switch(grade){
        case 'A' :
        cout << " exelent : " << endl;
        break ;
        case 'B' : 
        cout << " good job : " << endl;
        break;
        case 'C' :
        cout << " weldone : " << endl;
        break ;
        case 'D' :
        cout << " you need to improvement : " << endl;
        break;
        default :
        cout << "invalid grade" << endl;
    }
}*/




/*#include<iostream>
using namespace std ;
int main(){
    int marks ;
    cout << " enter marks : " << endl;
    cin >> marks ;

    switch(marks){
        case 80 :
        cout << " exelent marks : grade A" << endl;
        break ;
        case 70 :
        cout << " good job : grade B "<< endl;
        break ;
        case 60 :
        cout << " good : grade C  " << endl;
        break ;
        default:
        cout << " invalid marks : " << endl;
    }

}*/





/*#include<iostream>
using namespace std ;
int main(){
    float a ;
    float b ;
    char op ;
    

    cout << " enter a number : " << endl;
    cin >> a;
    cout << " enter operation : " << endl;
    cin >> op ;
    cout << " enter second number : " << endl;
    cin >> b ;
    

    switch(op){
        case '+':
         
        cout << " ans is : " << a+b << endl;
        break;
        case '-':
        cout << " subtraction of numbers is : "<< a-b <<endl;
        break;
        case '*' :
        cout << " multiplication of numbers is : " << a*b << endl;
        break;
        case'/':
        cout << " division of numbers is : " << a/b << endl;
        break;
        
        default:
        cout <<" invalid operation " << endl;
     }
}*/



/*#include<iostream>
using namespace std ;
int main (){
     char ch ;
     cout << " enter a character : "<< endl;
     cin >> ch ;

     if(ch>='a' && ch<='z'){
        cout << " character is lower case : " << ch << endl;
     }else if (ch>='A' && ch <= 'Z'){
        cout << " character is upper case : " << ch << endl;
     } else {
        cout << " invalid operation : " << endl; 
     }return 0 ;
}*/






/*#include<iostream>
using namespace std ;
int main(){
    int n = 50 ;
    int sum ;
    for(int i = 1 ; i <= n ; i++ ){
        cout << sum << "\n " ;
        sum=+i ;
        cout << sum << endl; 

    }cout << endl; 
    return 0 ;
}*/




#include<iostream>
using namespace std ;
int main (){
    int salary ;
    int marks ;
    
    cout << " enter your marks : " << endl; 
    cin >> marks ;
    cout << " enter your income : " << endl;
    cin >> salary ;

    if (marks>=80){
        if (salary >= 50000)
        cout << " you get 10% scholorship : " << endl;}
        if(marks > 80){
        if(salary<=50000)
        cout << " you get  50% scholorship :"<< endl;
    }else {
        cout << " you will pay full fees : "<< endl;
    } return 0 ;

}
    










