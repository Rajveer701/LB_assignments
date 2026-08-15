import java.util.*;

class program4 {
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);

        int units = 0;
        int billAmount = 0;
        System.out.println("Enter the number of units : ");
        units = sobj.nextInt();

        if(units<0){
            System.out.println("Units cannot be negative");
        }
        else if(units<=100){
            billAmount = units*5; 
        }
        else if(units>=101 && units<=200){
            billAmount += 100*5;
            billAmount += (units-100)*7;
        }
        else{
            billAmount += 100*5;
            billAmount += 100*7;
            billAmount += (units-200)*10;
        }

        System.out.println("Total Units Consumed : " + units);
        System.out.println("Total Electricity Bill : " + billAmount);
    }
}
