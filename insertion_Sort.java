import java.util.Scanner;

public class insertion_Sort
{
	void sort(int arr[])
	{
		int n = arr.length;
		for(int i = 1; i<n; i++)
		{
			int key = arr[i];
			int j = i -1;
			/* Di chuyen cac ptu co gtri lon hon key
			ve sau 1 vi tri */
			while (j>=0 && arr[j]>key)
			{
				arr[j+1] = arr[j];
				j = j - 1;
			}
			arr[j+1] = key;
		}
	}
	//Ham in mang
	static void printArray(int arr[])
	{
		for(int value : arr)
		{
			System.out.print(value+" ");
		}
		System.out.println();
	}

	//Driver method
	public static void main(String[] args)
	{
		//Nhap tu ban phim bang scanner
		Scanner sc = new Scanner(System.in);

		System.out.print("Input number of elements: ");
		int n = sc.nextInt();

		int[] arr = new int[n];
		System.out.println("Input element of array: ");
		for(int i=0; i<n;i++)
		{
			arr[i] = sc.nextInt();
		}

		//create obj and sort
		insertion_Sort ob = new insertion_Sort();
		ob.sort(arr);

		System.out.print("Sorted array: ");
		printArray(arr);

		sc.close(); //close scanner
	}
}
