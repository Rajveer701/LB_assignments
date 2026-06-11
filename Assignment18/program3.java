import java.util.*;

class Logic{
    public static void printOddNumbers(int num){
        //Logic
        int iCnt = 0;
        for(iCnt=1;iCnt<=num;iCnt++){
            if(iCnt%2!=0){
                System.out.println(iCnt);
            }
        }
    }
}

class program3{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}