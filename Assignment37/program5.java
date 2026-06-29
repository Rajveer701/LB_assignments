import java.util.*;

class Logic{
    public long ToggleBit(long iNo){
        long iMask = 0xF000000F;
        long iAns = 0;

        iAns = iNo ^ iMask;

        return iAns;
    }
}

class program5{
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);
        long iValue = 0;
        long iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.ToggleBit(iValue);
        
        System.out.println("Updated Number : "+iRet);
    }
}
