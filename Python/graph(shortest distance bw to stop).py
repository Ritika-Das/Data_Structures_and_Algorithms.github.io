class graph:
    def __init__(self,edges):
        self.edges=edges
        self.graph_dic={}
        for start,end in edges:
            if start in self.graph_dic:
                self.graph_dic[start].append(end)
            else:
                self.graph_dic[start]=[end]

    def short_path(self, start, end, path=[]):
        path = path + [start]
        if start == end:
            return path
        if start not in self.graph_dic:
            return None

        shortest_path = None
        for node in self.graph_dic[start]:
            if node not in path:
                sp = self.short_path(node, end, path)
                if sp:
                    if shortest_path is None or len(sp) < len(shortest_path):
                        shortest_path = sp
        return (shortest_path)

if __name__ == '__main__':
    routes = [
        ("Mumbai", "Paris"),
        ("Mumbai", "Dubai"),
        ("Paris", "Dubai"),
        ("Paris", "New York"),
        ("Dubai", "New York"),
        ("New York", "Toronto"),
    ]

    route_graph=graph(routes)
    start = "Mumbai"
    end = "New York"


    print(f"Shortest path between {start} and {end}: ", route_graph.short_path(start, end))

