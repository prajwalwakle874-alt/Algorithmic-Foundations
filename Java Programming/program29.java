import java.util.Scanner;

class program29
{
    public static void main(String[] A)
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        scanner= new Scanner(System.in);
        System.out.println("Enter your name :");
        sName = scanner.next();

        System.out.println("Enter your Age :");
        iAge = scanner.nextInt();

        
        System.out.println("Enter your Marks :");
        fMarks = scanner.nextFloat();

        
        sName=scanner.next();
        System.out.println("Wellcome"+sName);
        System.out.println("Your age is "+iAge);
        System.out.println("Your marks are"+fMarks);
    }
}