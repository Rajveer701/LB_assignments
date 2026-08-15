import java.util.*;

class program1 {
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);

        int daysKept = 0;
        int fineAmount = 0;
        System.out.println("Enter the number of days the book was kept : ");
        daysKept = sobj.nextInt();

        if(daysKept<7){
            System.out.println("Returned on time.No fine applicable.");
        }
        else if(daysKept>=8 && daysKept<=12){
            fineAmount += daysKept*5;
        }
        else {
            fineAmount = 12*5;
            fineAmount += (daysKept - 12) * 10;
        }

        System.out.println("Total fine to be paid : " + fineAmount);
    }
}
