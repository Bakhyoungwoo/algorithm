fun mergeSort(arr: IntArray, left: Int, right: Int)
{
    // 배열을 가장 작은 단위까지 나눔
    if (left < right) {
        val middle = left + (right - left) / 2

        // 왼쪽과 오른쪽 부분 배열 정렬
        mergeSort(arr, left, middle)
        mergeSort(arr, middle + 1, right)

        // 병합
        merge(arr, left, middle, right)
    }
}

fun merge(arr: IntArray, left: Int, middle: Int, right: Int) {
    val n1 = middle - left + 1
    val n2 = right - middle

    // 임시 배열 생성
    val L = IntArray(n1)
    val R = IntArray(n2)

    // 데이터를 임시 배열로 복사
    for (i in 0 until n1) {
        L[i] = arr[left + i]
    }
    for (j in 0 until n2) {
        R[j] = arr[middle + 1 + j]
    }

    // 임시 배열들을 병합하여 원래 배열에 복사
    var i = 0
    var j = 0
    var k = left
    // 왼쪽 배열과 오른쪽 배열중 작은 값을 결과 배열에 저장
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i]
            i++
        } else {
            arr[k] = R[j]
            j++
        }
        k++
    }
    // 나머지 요소들을 원래 배열에 복사
    while (i < n1) {
        arr[k] = L[i]
        i++
        k++
    }
    while (j < n2) {
        arr[k] = R[j]
        j++
        k++
    }
}

fun main() {
    print("Enter numbers separated by spaces: ")
    val input = readLine() ?: return
    val arr = input.split(" ").map { it.toIntOrNull() ?: return }.toIntArray()

    println("Original array: ${arr.contentToString()}")
    mergeSort(arr, 0, arr.size - 1)
    println("Sorted array: ${arr.contentToString()}")
}