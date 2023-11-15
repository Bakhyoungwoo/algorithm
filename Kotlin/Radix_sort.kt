//fun countingSort(arr: IntArray, exp: Int) {
//    val output = IntArray(arr.size)
//    val count = IntArray(10)
//
//    for (i in arr.indices) {
//        count[(arr[i] / exp) % 10]++
//    }
//
//    for (i in 1 until 10) {
//        count[i] += count[i - 1]
//    }
//
//    for (i in arr.size - 1 downTo 0) {
//        output[count[(arr[i] / exp) % 10] - 1] = arr[i]
//        count[(arr[i] / exp) % 10]--
//    }
//
//    for (i in arr.indices) {
//        arr[i] = output[i]
//    }
//}
//
//fun radixSort(arr: IntArray) {// 자릿수 만큼 반복
//    val max = arr.maxOrNull() ?: return
//
//    var exp = 1
//    while (max / exp > 0) {
//        countingSort(arr, exp)
//        exp *= 10
//    }
//}
//
//fun main() {
//    print("Enter numbers separated by spaces: ")
//    val input = readLine() ?: return
//    val arr = input.split(" ").map { it.toIntOrNull() ?: return }.toIntArray()
//
//    println("Original array: ${arr.contentToString()}")
//    radixSort(arr)
//    println("Sorted array: ${arr.contentToString()}")
//}
