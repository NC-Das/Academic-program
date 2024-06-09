import java.util.Scanner;

public class Binary_search {

    public int Binary(int arr[], int l, int r, int data) {
        int mid, pos = -1;
        while (l <= r) {
            mid = (l + r) / 2;
            if (data == arr[mid]) {
                pos = mid;
                return pos;
            } else if (arr[mid] > data) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Binary_search ob = new Binary_search();
        int n = 5, p, d = 2;
        int arr[] = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        p = ob.Binary(arr, 0, n, d);
        if (p == -1) {
            System.out.print("Not Found");
        } else {
            System.out.print(p);
        }

    }
}
