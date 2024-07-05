//fun insertionSort(arr: IntArray) {// 삽입정렬
//    for (i in 1 until arr.size) {// 배열의 크기만큼 진행
//        val key = arr[i]//key는 임시값으로 arr[i]이다.
//        var j = i - 1//i의 왼쪽
//
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j]//arr[i-1] > arr[i]이면 위치 변경
//            j--//j = 0일때까지 반복
//        }
//        arr[j + 1] = key
//    }
//}
//
//fun main() {
//    print("Enter numbers separated by spaces: ")
//    // 한번에 정렬될 숫자 입력
//    val input = readLine() ?: return
//    // 배열에 저장
//    val arr = input.split(" ").map { it.toIntOrNull() ?: return }.toIntArray()
//
//    println("Original array: ${arr.contentToString()}")
//    insertionSort(arr)
//    println("Sorted array: ${arr.contentToString()}")
//}
