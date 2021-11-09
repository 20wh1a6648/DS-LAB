def linear_search(list1,n,key):
    for i in range (0,n):
      if(list1[i] == key):
       return i;
    return -1

list1 = [1,3,5,7,8,9]
key = 7
n= len(list1)
result = linear_search(list1,n,key)
if(result ==-1):
    print("element not found")
else: 
    print("element fount at index",result)
