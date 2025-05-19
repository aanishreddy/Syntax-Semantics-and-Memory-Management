public class MemoryManagement {
    public static void main(String[] args) {
        // Dynamically allocating memory for an array on the heap
        int[] arr = new int[5];

        // Assigning values to the array
        for (int i = 0; i < arr.length; i++) {
            arr[i] = i + 1;
        }

        // Releasing reference to array (GC will clean up after this)
        arr = null;

        // Suggesting garbage collection
        System.gc(); // This suggests the JVM to run the garbage collector, but it's not guaranteed

        // Sleeping for a while to let GC run
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Memory freed by garbage collector.");
    }
}
