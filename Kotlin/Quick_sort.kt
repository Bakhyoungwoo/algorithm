// Partition 함수
fun partition(arr: IntArray, low: Int, high: Int): Int {
    val pivot = arr[high]
    var i = low - 1

    for (j in low until high) {
        if (arr[j] < pivot) {
            i++
            val temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp
        }
    }

    val temp = arr[i + 1]
    arr[i + 1] = arr[high]
    arr[high] = temp

    return i + 1
}

// Quick Sort 함수
fun quickSort(arr: IntArray, low: Int, high: Int) {
    if (low < high) {
        val pi = partition(arr, low, high)

        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)
    }
}

// 예시 사용법
fun main() {
    val arr = intArrayOf(4, 10, 3, 5, 1)

    println("정렬 전: ${arr.contentToString()}")
    quickSort(arr, 0, arr.size - 1)
    println("정렬 후: ${arr.contentToString()}")
}
