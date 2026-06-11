import java.util.*;

class Logic{
    public static void SumEvenOddDigits(int num){
        //Logic
        int iEvenSum = 0;
        int iOddSum = 0;
        int iDigit = 0;

        while(num != 0){
            iDigit = num % 10;
            if(iDigit%2==0){
                iEvenSum += iDigit;
            }
            else{
                iOddSum += iDigit;
            }
            num = num/10;
        }

        System.out.println("Sum of Even digits: " + iEvenSum);
        System.out.println("Sum of Odd digits: " + iOddSum);
    }
}

class program4{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}