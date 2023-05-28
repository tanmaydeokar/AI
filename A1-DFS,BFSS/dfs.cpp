#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Graph{

    string city[10];
    int a[10][10];
    int n;
    public:
    void input();
    void display();
    void dfs();
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
   std::cout<<endl;
}
void Graph::dfs(){
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=1;
    }
    stack<int>s;
    string start;
    int index;
    std::cout<<"Enter the starting city: ";
    std::cin>>start;
    for(int i=0;i<n;i++){
        if(start==city[index]){
            index=i;
        }
    }
    s.push(index);
    visited[index]=1;
    std::cout<<city[index]<<"->";
    int current=index;
    while(1){
        for(int i=0;i<n;i++){
            if(a[current][i]!=0 && visited[i]==0){
                s.push(i);
                std::cout<<city[i]<<"->";
                visited[i]=1;
                current=i;
                i=0;
            }
        }if(s.empty()!=0){
            break;
        }else{
            current=s.top();
            s.pop();
        }
    }
}
int main(){
    Graph g;
    g.input();
    g.display();
    g.dfs();
}