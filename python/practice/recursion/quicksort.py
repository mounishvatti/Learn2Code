def partition(arr, low, high):
    pivot = arr[low]
    i = low
    j = high

    while i<j:
        while arr[i] <= pivot and i <= high-1:
            i += 1
        while arr[j] > pivot and j >= low+1:
            j -= 1

        if i < j:
            arr[i], arr[j] = arr[j], arr[i]

    arr[low], arr[j] = arr[j], arr[low]
    return j

def qs(arr, low, high): # divide and conquer algorithm
    if low < high:
        partitionI = partition(arr,low,high)
        qs(arr, low, partitionI-1)
        qs(arr, partitionI+1, high)
        
arr = [5, 1, 7, 4, 9]

qs(arr, 0, len(arr)-1)
print(arr)