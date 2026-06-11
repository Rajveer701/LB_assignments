import java.util.*;

class Logic{
    public static void sumEvenNumbers(int num){
        //Logic
        int iSum = 0;
        int iCnt = 0;
        for(iCnt=1;iCnt<=num;iCnt++){
            if(iCnt%2==0){
                iSum = iSum+iCnt;
            }
        }
        System.out.println(iSum);
    }
}

class program1{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}