import java.util.*;

class Logic{
    public static void CheckPalindrome(int num){
        //Logic
        int iOriginal = num;  
        int iReverse = 0;
        int iDigit = 0;
        
        while(num!=0){
            iDigit = num%10;
            iReverse = iReverse*10 + iDigit;
            num = num/10;
        }

        if(iOriginal == iReverse){
            System.out.println("Number is Palindrome");
        }
        else{
            System.out.println("Number is not Palindrome");
        }
    }
}

class program2{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.CheckPalindrome(121);
    }
}