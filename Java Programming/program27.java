import java.util.Scanner;

class program77
{
    public static void main()
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        scanner= new Scanner(System.in);
        System.out.println("Enter your name :");

        scanner= new Scanner(System.in);
        System.out.println("Enter your Age :");
        iAge = scanner.nextInt();

        scanner= new Scanner(System.in);
        System.out.println("Enter your Marks :");
        fMarks = scanner.nextFloat();

        sName = scanner.next();

        System.out.println("Wellcome"+sName);
        System.out.println("Your age is "+iAge);
        System.out.println("Your marks are"+fMarks);


    }
}