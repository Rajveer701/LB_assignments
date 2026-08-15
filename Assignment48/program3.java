import java.util.*;

class program3 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = new int[5];
        int i=0;
        int avgMarks = 0;
        int Total = 0;

        System.out.println("Enter the marks of each subject : ");

        for(i=0;i<Arr.length;i++){
            Arr[i] = sobj.nextInt();
        }

        for(i=0;i<Arr.length;i++){
            if(Arr[i]<35){
                System.out.println("Failed");
                break;
            }
            else{
                Total += Arr[i]; 
                avgMarks = Total/5;
                if(avgMarks>=75){
                    System.out.println("Distinction");
                }
                else if(avgMarks>=60){
                    System.out.println("First Class");
                }
                else if(avgMarks>=50){
                    System.out.println("Second Class");
                }
                else if(avgMarks<50){
                    System.out.println("Pass");
                }
            }
        }        
    }
}