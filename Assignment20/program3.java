import java.util.*;

class Logic{
    public static void checkPerfect(int num){
        //Logic
        int iSum = 0;
        int iCnt = 0;
        for(iCnt=1;iCnt<num;iCnt++){
            if(num%iCnt==0){
                iSum = iSum+iCnt;
            }
        }
        if(iSum==num){
            System.out.println(num + " is perfect");
        }
        else{
            System.out.println(num + " is not perfect");
        }
    }
}

class program3{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}