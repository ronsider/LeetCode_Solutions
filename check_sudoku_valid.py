def valid_lines(grid):   
    for i in grid:
        st=set()
        for j in i:
            st.add(j)
        if(len(st) != 9):
            return False
    return True

def valid_columns(grid):
    for i in range(len(grid)):
        st=set()
        for j in range(len(grid)):
            st.add(grid[j][i])
        if(len(st)!=9):
            return False    
    return True 
    