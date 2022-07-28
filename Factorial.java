import java.util.Scanner;
public class Factorial
{
	public static int fact(int number)
	{
		return ((number==1)?1:(number*fact(number-1)));
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		System.out.println("Enter a number : ");
		int number=in.nextInt();

		System.out.println(fact(number));
	}
}