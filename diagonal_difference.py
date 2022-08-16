def diagonalDifference(arr):
    left_to_right = 0
    right_to_left = 0
    for i in range(len(arr)):
        for j in range(len(arr[i])):
            if(i==j):# coordinates for left to right
                left_to_right+=arr[i][j]
            if(j==len(arr)-1-i): # coordinates for right to left
                  right_to_left+=arr[i][j]
    result=left_to_right-right_to_left
    return result if result>0 else result*-1
