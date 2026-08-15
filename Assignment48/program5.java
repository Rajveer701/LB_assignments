import java.util.*;

class program5 {
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);

        int PurchaseAmount = 0;
        double discount = 0;
        double discountedAmount = 0;
        double finalAmount = 0;

        String membership = "";

        System.out.println("Enter the purchase amount : ");
        PurchaseAmount = sobj.nextInt();

        System.out.println("Enter membership type (Premium/Regular) : ");
        membership = sobj.next();

        if(PurchaseAmount <= 0) {
            System.out.println("Invalid amount");
        }
        else if(!membership.equals("Premium") && !membership.equals("Regular")) {
            System.out.println("Invalid membership type");
        }
        else{
            if(PurchaseAmount > 5000) {
                discount = PurchaseAmount * 0.20;
            }
            else if(PurchaseAmount > 2000) {
                discount = PurchaseAmount * 0.10;
            }
            else {
                discount = 0;
            }
            discountedAmount = PurchaseAmount - discount;

            if(membership.equalsIgnoreCase("Premium")) {
                double premiumDiscount = discountedAmount * 0.05;
                discount = discount + premiumDiscount;
                finalAmount = discountedAmount - premiumDiscount;
            }
            else {
                finalAmount = discountedAmount;
            }

            System.out.println("Original Amount: ₹" + PurchaseAmount);
            System.out.println("Total Discount: ₹" + discount);
            System.out.println("Final Payable Amount: ₹" + finalAmount);
        }
    }
}
