# def swap_elements(element1,element2):
#     element1, element2=element2, element1



def permutation(permutation_order, letters):
    for i in range(len(permutation_order)):
        if(permutation_order[i]==i):
            continue
        #swap_elements(letters[permutation_order[i]],letters[i])
        letters[permutation_order[i]],letters[i]=letters[i],letters[permutation_order[i]]
        #swap_elements(permutation_order[i],permutation_order[permutation_order[i]])
        permutation_order[i],permutation_order[permutation_order[i]]=permutation_order[permutation_order[i]],permutation_order[i]
        i=0
        

lst=['a','b','c','d','e']
pers=[3,4,2,1,0]
permutation(pers,lst)
for x in lst:
    print(x)   

