def func(perm,lst):
    for i in range(len(perm)):
        if(perm[i]==i):
            continue
        lst[perm[i]],lst[i]=lst[i],lst[perm[i]]
        perm[i],perm[perm[i]]=perm[perm[i]],perm[i]
        i=0

lst = ['a','b','c','d']
perm = [2,0,1,3]

func(perm,lst)

print(perm)

