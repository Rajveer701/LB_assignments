import java.util.*;

class StudentPerformance
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = sobj.nextInt();
        int M = sobj.nextInt();

        if(N <= 0 || M <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int[][] marks = new int[N][M];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                marks[i][j] = sobj.nextInt();

                if(marks[i][j] < 0 || marks[i][j] > 100)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        int[] totals = new int[N];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                totals[i] += marks[i][j];
            }
        }

        int topper = 0;

        for(int i = 1; i < N; i++)
        {
            if(totals[i] > totals[topper])
            {
                topper = i;
            }
        }

        double[] averages = new double[M];

        for(int j = 0; j < M; j++)
        {
            int sum = 0;

            for(int i = 0; i < N; i++)
            {
                sum += marks[i][j];
            }

            averages[j] = (double)sum / N;
        }

        System.out.println("Student Totals:");

        for(int i = 0; i < N; i++)
        {
            System.out.println("Student " + (i + 1) + ": " + totals[i]);
        }

        System.out.println();
        System.out.println("Topper: Student " + (topper + 1));

        System.out.println();
        System.out.println("Subject Averages:");

        for(int j = 0; j < M; j++)
        {
            System.out.printf("Subject %d: %.2f%n", j + 1, averages[j]);
        }

        System.out.println();
        System.out.println("Students Failed:");

        boolean found = false;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(marks[i][j] < 35)
                {
                    System.out.println("Student " + (i + 1));
                    found = true;
                    break;
                }
            }
        }

        if(!found)
        {
            System.out.println("None");
        }
    }
}