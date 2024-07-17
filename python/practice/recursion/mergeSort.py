def merge(arr, low, mid, high):
    i = low
    j = mid+1

    temp = []
    while i <= mid and j <= high:
        if arr[i] < arr[j]:
            temp.append(arr[i])
            i += 1
        else:
            temp.append(arr[j])
            j += 1
        
    while i <= mid:
        temp.append(arr[i])
        i += 1
    
    while j <= high:
        temp.append(arr[j])
        j += 1

    for i in range(len(temp)):
        arr[low + i] = temp[i]


def mergeSort(arr, low, high):
    if low >= high:
         return

    mid = (low + high) // 2
    mergeSort(arr, low, mid)
    mergeSort(arr, mid + 1, high)
    merge(arr, low, mid, high)


arr = [12, 11, 13, 5, 6, 7]

mergeSort(arr, 0, len(arr)-1)

print(arr)