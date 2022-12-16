def valid_lines(grid):   
    for i in grid:
        st=set()
        for j in i:
            st.add(j)
        if(len(st) != 9):
            return False
    return True