fun heapSort(arr: IntArray) {
    val n = arr.size

    // 힙을 구성
    for (i in n / 2 - 1 downTo 0) {
        heapify(arr, n, i)
    }

    // 힙에서 원소를 하나씩 꺼내 정렬
    for (i in n - 1 downTo 1) {
        // 최소값인 루트 노드와 마지막 노드를 교환
        val temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp

        // 힙을 다시 구성
        heapify(arr, i, 0)
    }
}

fun heapify(arr: IntArray, n: Int, i: Int) {
    var largest = i
    val left = 2 * i + 1
    val right = 2 * i + 2

    // 왼쪽 자식이 부모보다 크면 largest를 왼쪽 자식으로 설정
    if (left < n && arr[left] > arr[largest]) {
        largest = left
    }

    // 오른쪽 자식이 largest보다 크면 largest를 오른쪽 자식으로 설정
    if (right < n && arr[right] > arr[largest]) {
        largest = right
    }

    // largest가 부모가 아니라면 largest와 부모를 교환하고 힙을 다시 구성
    if (largest != i) {
        val swap = arr[i]
        arr[i] = arr[largest]
        arr[largest] = swap
        heapify(arr, n, largest)
    }
}


fun main() {
    val arr = intArrayOf(4, 10, 3, 5, 1)
    heapSort(arr)
    println("정렬된 배열: ${arr.contentToString()}")
}
