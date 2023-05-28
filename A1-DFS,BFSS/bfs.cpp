#include<iostream>
#include<queue>
using namespace std;
class Graph{

    string city[10];
    int a[10][10];
    int n;
    public:
    void input();
    void display();
    void bfs();
};
void Graph::input(){
    std::cout<<"\nEnter no. of cites near the school : ";
    std::cin>>n;
    std::cout<<"\nEnter the names of cities: ";
    for(int i=0 ; i<n ; i++)
        std::cin >> city[i];

    std::cout<<"\nEnter the distances: ";
    for(int i=0 ; i<n ; i++)
        for(int j=i ; j<n ; j++)
        {
            if(i==j)
            {
                a[i][j] = 0;
                continue;
            }

            std::cout<<"\nEnter the distance between " << city[i] <<" and " << city[j]<< " : ";
            std::cin >> a[i][j];
            a[j][i] = a[i][j];
        }

}
void Graph::display()
{

    for(int i=0 ; i<n ; i++)
    {
        std::cout<<"\n";
        for(int j=0 ; j<n ; j++)
        {
            std::cout<<a[i][j] << "\t";
        }
   }
}
void Graph::bfs(){
   int visited[n];
   queue<int>q;
   for(int i=0;i<n;i++){
    visited[i]=0;
   }
   string start;
   std::cout<<"Enter the starting city: ";
   std::cin>>start;
   int index;
   for(int i=0;i<n;i++){
    if(start==city[i]){
        index=i;
    }
   }
   visited[index]=1;
   std::cout<<city[index]<<"->";
   int current=index;
   while(1){
    for(int i=0;i<n;i++){
        if(a[current][i]!=0 && visited[i]!=1){
            visited[i]=1;
            q.push(i);
            std::cout<<city[i]<<"->";

        }
    }
    if(!q.empty()==0){
        break;
    }
    else{
        current=q.front();
        q.pop();
    }
   }
}
int main(){
    Graph g;
    g.input();
    g.display();
    g.bfs();

    
}
 