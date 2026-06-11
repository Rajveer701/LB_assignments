import java.util.*;

class Logic{
    public static void displayFactors(int num){
        //Logic
        int iCnt = 0;
        int iCount = 0;
        for(iCnt=1;iCnt<num;iCnt++){
            if(num%iCnt==0){
                iCount++;
            }
        }
        System.out.println(iCount);
    }
}

class program4{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.displayFactors(20);
    }
}