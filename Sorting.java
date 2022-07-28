import java.util.Scanner;
public class Sorting
{
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int [] arr = new int [10];
		System.out.println("Enter the elements in the array : ");
		for(int i = 0; i < arr.length; i++){
			arr[i] = in.nextInt();
		}

		System.out.println("The elements in the array after sorting :  ");
		int t=0;
		for(int i = 0; i<arr.length;i++)
		{
			for(int j = (i+1);j<arr.length;j++){
				if(arr[i]<arr[j]){
					arr[i]=t;
					arr[j]=arr[i];
					t=arr[j];
				}
			}
		}
		System.out.println("The elements in the array after sorting is : ");
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]);
		}
		System.out.println();
	}
}