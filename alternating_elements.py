#swap 2 elements in list
def swap(list,pos1,pos2):
    list[pos1],list[pos2]=list[pos2],list[pos1]
    return list
    

def reorder(numbers):
    for i in range(1,len(numbers)-1):
        if((not(i%2) and numbers[i-1] < numbers[i]) or ((i%2) and numbers[i-1] > numbers[i])):
            swap(numbers,i,i-1)


lst=[6,1,8,12,88,12,3,13,10]   
reorder(lst)
print(lst)


