public class SelectionSortGreedy {

    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j; // find the index of the smallest element
                }
            }
            // swap the smallest element with the element at the beginning of the unsorted part
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = {5, 2, 8, 1, 3};
        System.out.println("Original array: ");
        for(int i=0;i<8;i++){
            System.out.print(arr[i]+" ");
        }
        selectionSort(arr);
        System.out.println("Sorted array: " );
        for(int j=0;j<8;j++){
            System.out.print(arr[j]+" ");
        }
    }
}
