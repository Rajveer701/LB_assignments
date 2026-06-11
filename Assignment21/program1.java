import java.util.*;

class Logic{
    public static void productOfDigits(int num){
        //Logic
        int iDigit = 0;
        int iProd = 1;
        while(num!=0){
            iDigit = num%10;
            iProd = (iProd*iDigit);
            num = num/10;
        }
        System.out.println(iProd);
    }
}

class program1{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}