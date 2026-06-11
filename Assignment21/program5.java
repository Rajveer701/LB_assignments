import java.util.*;

class Logic{
    public static void printDivisibleBy2and3(int num){
        //Logic
        int iCnt=0;
        for(iCnt=1;iCnt<num;iCnt++){
            if(iCnt%2 == 0 && iCnt%3 == 0){
                System.out.println(iCnt);
            }
        }
    }
}

class program5{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}