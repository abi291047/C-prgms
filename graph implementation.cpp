#include<iostream>
using namespace std;
class Graph{
    int graph[10][10];//maximum 10 nodes
    int numvertices;
    bool directed;
    public:
    Graph(int vertices,bool isdirected=false)
    {
        numvertices=vertices;
        directed=isdirected;
        for(int i=0;i<numvertices;i++)
        {
            for(int j=0;j<numvertices;j++)
            {
                graph[i][j]=0;
            }
        }}
        void addEdge(int x,int y){
       graph[x][y]=1;
if(!directed){
    graph[y][x]=1;
}}
    void display()
    {
        cout<<"Matrix"<<endl;
        for(int i=0;i<numvertices;i++)
        {
            for(int j=0;j<numvertices;j++)
            {
               cout<< graph[i][j]<<" ";
    }cout<<endl;
}
}
};
int main()
{
    int vertices=5;
    Graph g(vertices,false);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.display();
} 
