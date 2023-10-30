def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        sorted = i - 1
        while sorted >= 0 and arr[sorted] > arr[sorted + 1]:
            arr[sorted],arr[sorted + 1] = arr[sorted + 1], arr[sorted]
            sorted -= 1


