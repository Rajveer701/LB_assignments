import java.util.*;

class Logic{
    public long OFFBit(long iNo,int iPos){
        long iMask = 0x1;
        long iAns = 0;

        iMask = iMask << (iPos-1);

        iAns = iNo ^ iMask;

        return iAns;
    }
}

class program2{
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);
        long iValue = 0;
        int iPos = 0;
        long iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.OFFBit(iValue,iPos);
        
        System.out.println("Updated Number : "+iRet);
    }
}
