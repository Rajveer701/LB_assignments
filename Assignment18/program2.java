import java.util.*;

class Logic{
    public static void printEvenNumbers(int num){
        //Logic
        int iCnt = 0;
        for(iCnt=1;iCnt<=num;iCnt++){
            if(iCnt%2==0){
                System.out.println(iCnt);
            }
        }
    }
}

class program2{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}