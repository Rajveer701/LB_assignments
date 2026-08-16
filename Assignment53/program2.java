import java.util.*;

class CinemaHall
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int R = sobj.nextInt();
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int[][] seats = new int[R][C];

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                seats[i][j] = sobj.nextInt();

                if(seats[i][j] != 0 && seats[i][j] != 1)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        int total = 0;
        int max = 0;
        int maxRow = 0;
        boolean full = false;

        for(int i = 0; i < R; i++)
        {
            int count = 0;

            for(int j = 0; j < C; j++)
            {
                if(seats[i][j] == 1)
                {
                    total++;
                    count++;
                }
            }

            if(count > max)
            {
                max = count;
                maxRow = i;
            }

            if(count == C)
            {
                full = true;
            }
        }

        System.out.println("Total Booked Seats: " + total);
        System.out.println("Row With Maximum Bookings: Row " + (maxRow + 1));

        if(full)
        {
            System.out.println("Full Row Exists: Yes");
        }
        else
        {
            System.out.println("Full Row Exists: No");
        }
    }
}