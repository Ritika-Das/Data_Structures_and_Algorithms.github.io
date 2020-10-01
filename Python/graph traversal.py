class graph:
    def __init__(self,edges):
        self.edges=edges
        self.graph_dic={}
        for start,end in edges:
            if start in self.graph_dic:
                self.graph_dic[start].append(end)
            else:
                self.graph_dic[start]=[end]
        print("graph_dic",self.graph_dic)


if __name__ == '__main__':



    routes = [
        ("Mumbai", "Paris"),
        ("Mumbai", "Dubai"),
        ("Paris", "Dubai"),
        ("Paris", "New York"),
        ("Dubai", "New York"),
        ("New York", "Toronto"),
    ]

    route_graph = graph(routes)
