fun maxheapSort(arr: IntArray) {
    val n = arr.size

    // 최소 힙 구축
    for (i in n / 2 - 1 downTo 0) {
        maxheapify(arr, n, i)
    }

    // 하나씩 추출하여 정렬
    for (i in n - 1 downTo 0) {
        // 현재 최솟값을 배열 끝으로 이동
        val temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp

        // 축소된 힙에 대해 다시 최소 힙 구축
        maxheapify(arr, i, 0)
    }
}

// 주어진 노드를 루트로 하는 서브트리를 최소 힙으로 만드는 함수
fun maxheapify(arr: IntArray, n: Int, i: Int) {
    var smallest = i // 가장 작은 값의 인덱스
    val left = 2 * i + 1
    val right = 2 * i + 2

    // 왼쪽 자식이 현재 노드보다 작다면
    if (left < n && arr[left] < arr[smallest]) {
        smallest = left
    }

    // 오른쪽 자식이 현재 노드보다 작다면
    if (right < n && arr[right] < arr[smallest]) {
        smallest = right
    }

    // 가장 작은 값이 현재 노드가 아니라면 위치 변경
    if (smallest != i) {
        val swap = arr[i]
        arr[i] = arr[smallest]
        arr[smallest] = swap

        // 재귀적으로 서브 트리에 대해 힙 구축
        maxheapify(arr, n, smallest)
    }
}

fun main() {
    val arr = intArrayOf(12, 11, 13, 5, 6, 7)
    println("정렬 전: ${arr.contentToString()}")
    maxheapSort(arr)
    println("정렬 후: ${arr.contentToString()}")
}
