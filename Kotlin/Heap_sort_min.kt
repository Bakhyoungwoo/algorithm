fun minHeapify(arr: IntArray, n: Int, i: Int) {
    var largest = i
    val leftChild = 2 * i + 1
    val rightChild = 2 * i + 2

    if (leftChild < n && arr[leftChild] > arr[largest]) {
        largest = leftChild
    }

    if (rightChild < n && arr[rightChild] > arr[largest]) {
        largest = rightChild
    }

    if (largest != i) {
        val temp = arr[i]
        arr[i] = arr[largest]
        arr[largest] = temp

        minHeapify(arr, n, largest)
    }
}

// Max Heap Sort 함수
fun maxHeapSort(arr: IntArray) {
    val n = arr.size

    // Max Heap 만들기
    for (i in n / 2 - 1 downTo 0) {
        minHeapify(arr, n, i)
    }

    // 힙에서 요소 하나씩 추출하며 정렬하기
    for (i in n - 1 downTo 1) {
        val temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp

        minHeapify(arr, i, 0)
    }
}

// 예시 사용법
fun main() {
    val arr = intArrayOf(4, 10, 3, 5, 1)

    println("정렬 전: ${arr.contentToString()}")
    maxHeapSort(arr)
    println("정렬 후: ${arr.contentToString()}")
}
