graph={
    'A':['B','C'],
    'B':['A'],
    'C':['D','E','F','S'],
    'D':['C'],
    'E':['C','H'],
    'F':['C','G'],
    'G':['F','G'],
    'H':['E','G'],
    'S':['A','C','G']
}

visited=[]

def dfs(graph,node):
    if node not in visited:
        visited.append(node)
        for n in graph[node]:
            dfs(graph,n)
dfs(graph,'A')
print(visited)