def linear_search(arr,find_element):
    for i in range(len(arr)):
        if arr[i]==find_element:
            return i
    return -1
   
arr=[1,2,3,4,5,6,7,8,10]
find_element=5
print(f"Original List:{arr}")
result=linear_search(arr,find_element)
if(result==-1):
    print("Element not found")
else:
    print("Element found at index:",result)    

