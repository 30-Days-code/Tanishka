import java.util.Scanner;

public class overload {

    static int method(int n, int m)
    {
        int a = Math.max(n,m);
        return a;
    }

    static double method(double x, double y)
    {
        double a = x*y;
        return a;
    }

    public static void main(String[] args)
    {
        System.out.println("Enter two integers and two number with decimals");
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int m=scanner.nextInt();
        double x=scanner.nextDouble();
        double y=scanner.nextDouble();
        scanner.close();

        System.out.println("Maximum number is "+method(n,m));
        System.out.println("Product is "+method(x,y));
    }
    
}


/*
This program will take two inputs
1) First method will maximum of two numbers
2) Second method will find product

*/