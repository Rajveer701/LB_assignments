import java.util.*;

class Logic{
    public static void countEvenOddRange(int num){
        //Logic
        int iEvenCnt = 0;
        int iOddCnt = 0;
        int iCnt = 0;
        for(iCnt=1;iCnt<num;iCnt++){
            if(iCnt%2==0){
                iEvenCnt++;
            }
            else{
                iOddCnt++;
            }
        }
        System.out.println("Even Count : "+iEvenCnt);
        System.out.println("Odd Count : "+iOddCnt);
    }
}

class program2{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}