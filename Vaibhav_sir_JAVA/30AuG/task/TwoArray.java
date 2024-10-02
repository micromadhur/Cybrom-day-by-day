public class ArrayEquality {
    public static boolean arraysAreEqual(int[] arr1, int[] arr2) {
        // Check if the arrays have the same length
        if (arr1.length != arr2.length) {
            return false;
        }

        // Compare each element of the arrays
        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }

        // If all elements match, the arrays are equal
        return true;
    }

    public static void main(String[] args) {
        char[] array1 = {'v', 'a', 'i' };
        char[] array2 = {'v', 'a', 'i', 'b'};
        char[] array3 = {1, 2, 3, 5};

        System.out.println(arraysAreEqual(array1, array2)); // true
        System.out.println(arraysAreEqual(array1, array3)); // false
    }
}
