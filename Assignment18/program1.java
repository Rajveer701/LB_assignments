import java.util.*;

class Logic{
    public static void checkPrime(int num){
        //Logic
        int iCnt = 0;
        boolean bFlag = false;
        for(iCnt=2;iCnt<num;iCnt++){
            if(num%iCnt==0){
                bFlag = true;
                break;
            }
        }
        if(bFlag == true){
            System.out.println("Number is not prime");
        }
        else{
            System.out.println("Number is prime");
        }
    }
}

class program1{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}