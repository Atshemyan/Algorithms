

def partition(arr, left, right):
    i = left
    j = right - 1
    while i < j:
        while arr[i] < arr[right]:
            i += 1
        while arr[j] >= arr[right]:
            j -= 1
        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
    arr[i], arr[right] = arr[right], arr[i]
    return i

def quickSort(arr, left, right):
    if left < right:
        part = partition(arr, left, right)
        quickSort(arr, left, part - 1)
        quickSort(arr, part + 1, right)



arr = [4, 2, 1, 2, 5, 9, 2]
quickSort(arr, 0, len(arr) - 1)
print(arr)
