import java.util.*;

class Logic{
    public long Update(long iNo){
        long iMask = 0x240;
        long iAns = 0;

        iAns = iNo & iMask;

        return iAns;
    }
}

class program2{
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);
        long iValue = 0;
        long iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.Update(iValue);

        System.out.println("Updated number : "+iRet);
    }
}
