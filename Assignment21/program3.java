import java.util.*;

class Logic{
    public static void displayFactors(int num){
        //Logic
        int iCnt = 0;
        for(iCnt=1;iCnt<num;iCnt++){
            if(num%iCnt==0){
                System.out.println(iCnt);
            }
        }
    }
}

class program3{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}